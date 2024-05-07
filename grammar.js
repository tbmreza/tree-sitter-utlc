// Wrap an argument to `choice` with one of these functions to specify its precedence level.
const PREC = {
  first: ($) => prec(100, $),
  last: ($) => prec(-1, $),
};

const PAREN_OPEN = "(";
const PAREN_CLOSE = ")";
const surround = (...x) => seq(PAREN_OPEN, ...x, PAREN_CLOSE);

module.exports = grammar({
  name: "utlc",

  rules: {
    utlc: ($) => choice($.datum, $.list),

    // Atoms are space-delimited words that can contain the following characters.
    atom: _ => /[_@a-zA-Z0-9\xC0-\xD6\xD8-\xDE\xDF-\xF6\xF8-\xFF:-]+/,

    bool: _ => seq("#", /[tf]/),

    list: ($) => surround(repeat(choice(PREC.first($.atom), $.list))),

    datum: ($) => choice(
      $.bool,
      $.atom,
      $.lambda,
      // $.appl,
    ),

    // x is an atom
    // (e1 ...en) is a list
    // (lambda (x) x)
    lambda: ($) => surround("lambda", surround($.atom), $.datum),
  },
});

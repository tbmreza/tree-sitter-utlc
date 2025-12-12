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
    sexp: ($) => repeat($._element),

    _element: ($) => choice($.datum, $.list),

    // Atoms are space-delimited words that can contain the following characters.
    // Modified to be more permissive for Scheme-like atoms, including +, -, numbers.
    atom: _ => /[^\s()\[\]#]+/,

    bool: _ => seq("#", /[tf]/),

    list: ($) => surround(repeat($._element)),

    datum: ($) => choice(
      $.bool,
      $.atom,
      $.lambda,
    ),

    // (lambda (x) body)
    lambda: ($) => surround("lambda", surround($.atom), $._element),
  },
});

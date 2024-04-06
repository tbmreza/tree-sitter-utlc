package tree_sitter_utlc_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-utlc"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_utlc.Language())
	if language == nil {
		t.Errorf("Error loading Utlc grammar")
	}
}

package parser

import (
	"go/ast"
	"go/parser"
	"go/token"
)

func parseDir(path string) (map[string]*ast.Package, error) {
	return parser.ParseDir(token.NewFileSet(), path, nil, parser.AllErrors)
}

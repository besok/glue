package main

import "fmt"

func main() {

	whileRes := fibWhile(25)
	recRes := fibRec(25)

	fmt.Printf("%d - %d == %d \n", whileRes, recRes, whileRes-recRes)
}

// 1 1 2 3 5 8 13 21
func fibWhile(n int) int {
	if n < 2 {
		return n
	}
	left, right := 1, 1
	for ; n != 1; n -= 1 {
		left = left + right
		right = left - right
	}
	return right
}

func fibRec(n int) int {
	return fibRecAcc(n, 1, 1)
}
func fibRecAcc(n int, prevOne int, prevTwo int) int {
	if n < 2 {
		return prevTwo
	}
	return fibRecAcc(n-1, prevOne+prevTwo, prevOne)
}

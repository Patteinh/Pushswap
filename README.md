# Push Swap 🔄

Welcome to the **Push Swap**.

This project challenges you to sort a list of numbers using a specific set of operations.

## Language and Tools 🛠️

![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)

- **Language:** C
- **Compilation:** Via Makefile, including `re`, `clean`, and `fclean` rules.
- **Binary Name:** push_swap

## Project Overview 🔎

Your task is to create a program that sorts a list of numbers (`l_a`) using a second list (`l_b`) and a defined set of operations. Initially, `l_b` is empty, and `l_a` contains a set of positive or negative numbers.

### Operations

- **sa:** Swap the first two elements of `l_a`.
- **sb:** Swap the first two elements of `l_b`.
- **sc:** Perform `sa` and `sb` simultaneously.
- **pa:** Move the first element of `l_b` to `l_a`.
- **pb:** Move the first element of `l_a` to `l_b`.
- **ra:** Rotate `l_a` toward the beginning.
- **rb:** Rotate `l_b` toward the beginning.
- **rr:** Perform `ra` and `rb` simultaneously.
- **rra:** Rotate `l_a` toward the end.
- **rrb:** Rotate `l_b` toward the end.
- **rrr:** Perform `rra` and `rrb` simultaneously.

### Goal

- Sort the list `l_a` using the fewest possible operations.
- Print the series of operations that sort the list.

## Examples

Input: `./push_swap 2 1 3 6 5 8`<br/>
Output: `sa pb pb pb sa pa pa pa`<br/>

Input: `./push_swap 73 79 83 89 97`<br/>
Output: `(No operations needed)`<br/>

Input:  `./push_swap 1789`<br/>
Output: `(No operations needed)`<br/>


## Installation and Usage 💾

1. Clone the repository.
2. Compile the program using `make`.
3. Run the program: `./push_swap [list of numbers]`.
4. For detailed guidelines, refer to `pushswap.pdf`.

## License ⚖️

This project is released under the MIT License. See `LICENSE` for more details.

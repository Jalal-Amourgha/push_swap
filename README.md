This project has been created as partof the 42 curriculum by jamourgh.

# Description

Push swap is a project about sorting a list of integers using two stacks only (A and B) and a limited set of operations.
The goal is to sort the numbers with as few moves as possible.




# Instructions

## installation

```
git@vogsphere.1337.ma:vogsphere/intra-uuid-b4b2e106-57e1-4d80-aec5-0699b9c7e217-7118383-jamourgh push_swap

cd ./push_swap/
```

### To run the project


* push_swap (main part)

	```
	make

	./push_swap 37 13
	./push_swap "37 13"
	```

_Then the program will print the list of moves needed to sort this list of numbers._


- for the bonus (checker)

	```
	make bonus
	```

	* Using push_swap with checker (pipe) :

		```
		./push_swap 37 13 | ./checker 37 13
		```

		_It will display `OK`. if list is correct and the same_


	* Using checker manually :

		```
		./checker 37 13
		```

		- The program will wait for you to type moves manually in the terminal. After pressing `Ctrl + D`, it will print: 
			- `OK` → list is sorted
			- `KO` → list is not sorted
			- `Error` → invalid move or wrong input

		- These are the only valid operations:
			- `sa`    `sb`  `ss`
			- `pa`    `pb`
			- `ra`    `rb`  `rr`
			- `rra`  `rrb` `rrr`
		- If you type something else, the program will display `Error`.



# Project Structure

## Push Swap

### /src/push_swap/


| File                     | Description                                    |
| ------------------------ | ---------------------------------------------- |
| `ft_push_swap.c`         | Main logic of push_swap                        |
| `ft_push_swap.h`         | Header file (structs & prototypes)             |
| `ft_sort.c`              | Chooses the sorting strategy                   |
| `ft_chunk_sort.c`        | Chunk-based sorting algorithm                  |
| `ft_push_min_to_b.c`     | Pushes smallest values to stack B              |
| `ft_indexing_values.c`   | Indexes values to simplify sorting             |
| `ft_create_list.c`       | Creates the linked list from arguments         |
| `ft_check_list.c`        | Validates input arguments                      |
| `ft_check_duplication.c` | Checks for duplicate numbers                   |
| `ft_argv_size.c`         | Counts arguments                               |
| `ft_split.c`             | Splits arguments when passed as a string       |
| `ft_atoi.c`              | Converts string to integer with overflow check |
| `ft_strlen.c`            | String length                                  |
| `ft_putstr.c`            | Prints string                                  |
| `ft_free_argv.c`         | Frees split arguments                          |
| `ft_free_list.c`         | Frees linked list                              |
| `ft_lstnew.c`            | Creates new list node                          |
| `ft_lstadd_back.c`       | Adds node at the end                           |
| `ft_lstsize.c`           | Returns list size                              |
| `ft_push.c`              | Push operations (pa, pb)                       |
| `ft_swap.c`              | Swap operations (sa, sb, ss)                   |
| `ft_rotate.c`            | Rotate & reverse rotate operations (ra, rb,...)|



## Checker

### /src/checker/



| File                             | Description                    |
| -------------------------------- | ------------------------------ |
| `ft_checker_bonus.c`             | Main checker program           |
| `ft_checker_bonus.h`             | Header file                    |
| `ft_get_next_line_bonus.c`       | Reads input line by line       |
| `ft_get_next_line_utils_bonus.c` | GNL utilities                  |
| `ft_get_operators_bonus.c`       | Reads and stores operations    |
| `ft_apply_operator_bonus.c`      | Applies operations to stacks   |
| `ft_check_operator_bonus.c`      | Validates operations           |
| `ft_check_if_sorted_bonus.c`     | Checks if stack is sorted      |
| `ft_create_list_bonus.c`         | Creates list from arguments    |
| `ft_check_list_bonus.c`          | Validates input                |
| `ft_check_duplication_bonus.c`   | Duplicate check                |
| `ft_argv_size_bonus.c`           | Argument count                 |
| `ft_split_bonus.c`               | Argument splitting             |
| `ft_atoi_bonus.c`                | String to int                  |
| `ft_strlen_bonus.c`              | String length                  |
| `ft_putstr_bonus.c`              | Prints output                  |
| `ft_free_argv_bonus.c`           | Frees arguments                |
| `ft_free_list_bonus.c`           | Frees list                     |
| `ft_free_and_print_bonus.c`      | Frees memory and prints result |
| `ft_lstnew_bonus.c`              | New list node                  |
| `ft_lstadd_back_bonus.c`         | Add node to list               |
| `ft_lstsize_bonus.c`             | List size                      |
| `ft_push_bonus.c`                | Push operations                |
| `ft_swap_bonus.c`                | Swap operations                |
| `ft_rotate_bonus.c`              | Rotate operations              |




# Resources

## Chunk Algorithm

The chunk algorithm is a strategy used to reduce the number of operations when sorting large lists.

* Idea:
	- Instead of sorting everything at once, the list is divided into chunks.
	- Each chunk contains a range of indexed values.
	- Elements are pushed from stack A to stack B chunk by chunk.
	- Then elements are pushed back from B to A in the correct order.

* Why it works well:
	- Limits unnecessary rotations
	- Reduces total number of moves
	- Makes sorting large inputs (like 500 numbers) more efficient

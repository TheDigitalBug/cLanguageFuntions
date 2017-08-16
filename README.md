# Project Name : Some C functions and programs

# ft_itoa_base.c
Function that converts an integer value to string using the specified base.
The base is an integer, from 2 to 16.
(For example, base 4 would be "0123" and base 16 "0123456789ABCDEF").
For base 10 and negative value, the resulting string is preceded with a minus sign (-).
With any other base, value is always considered unsigned.

# inter.c
Program that takes two strings and displays the characters that appear in both strings, in the order they appear in the first
one. Without doubles.
```
$>./inter love folv
lov
```
# reverse_bits.c
Function that takes a byte, reverses it, bit by bit.

```
237 => 1110 1101
after reverse
1101 1110 => 222
```
# sort_int_tab.c
Function sort (in-place) the int array, that contains exactly 'size' elements, in ascending order.
For always coherent input.
sort_int_tab_recur - recursive
sort_int_tab - iterative

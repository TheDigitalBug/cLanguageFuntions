# Project Name : Some C functions and programs

# 1. ft_itoa_base.c
Function that converts an integer value to string using the specified base.
The base is an integer, from 2 to 16.
(For example, base 4 would be "0123" and base 16 "0123456789ABCDEF").
For base 10 and negative value, the resulting string is preceded with a minus sign (-).
With any other base, value is always considered unsigned.

# 2. inter.c
Program that takes two strings and displays the characters that appear in both strings, in the order they appear in the first
one. Without doubles.
```
$>./inter love folv
lov
```
# 3. reverse_bits.c
Function that takes a byte, reverses it, bit by bit.

```
237 => 1110 1101
after reverse
1101 1110 => 222
```
# 4. sort_int_tab.c
Function sort (in-place) the int array, that contains exactly 'size' elements, in ascending order.
For always coherent input.
sort_int_tab_recur - recursive
sort_int_tab - iterative

# 5. reverseInteger.c
Reverse digits of an integer.
input => x = 123456, return 654321.
input => x = -123456, return -654321.
if reversed integer overflows - return 0.


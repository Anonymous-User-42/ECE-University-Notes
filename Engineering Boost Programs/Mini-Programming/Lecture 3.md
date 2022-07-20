

#   Double Placeholder

*   By default %lf (or %f) placeholder displays the number with 6 decimal digits and no padding (may vary depending on computer systems).
*   The formatted double placeholder has the format, *%w.dlf*, where "w" is the total width of the field (including sign and decimal point) and d is the number of the decimal digits.
*   If the value is 4.56 and the placeholder is %6.3lf, then the display would be _4.560 leading blank.
*   If the value of is -32.4573 and the placeholder is %7.3lf, then you will get 3 decimal digits as requested plus the significant numbers: -32.457.
*   If the value is -32.4578 and the placeholder is %8.3lf, then you will get 3 decimal digits as requested plus the significant numbers and padding: _-32.458. See the rounding-up effect. The compliler could also **Truncate** (Round-Up) in this case.
*   A %8.7lf for a value of 187.123 will produce a display of 187.1230000.

Note:   The internal value is unaffected by the placeholder, only its screen appearance.

#   Simple Assignment Operator

*   Assignes a value to a variable
*   Does **not** mean equality, it means assignment

Examples include:

*   Var1 = "a", Implies "a" in Var1
*   Var2 = 15, Implies 15 in Var2
*   Var3 = 27.62, Implies 27.62 in Var2

Another way to fill a variable is to ask the user for its value. We do that with the scanf statement.

Example:

```C

/* Sample Program */

printf("Enter your score:");
scanf("%d", &score);

```

To get a input from the user, as defined in <stdio.h>, we follow as below:

```C

/* Sample Program*/

scanf("%f", &var);  /* gets a value for var from the user */
%f  /* tells the program the type of the data */
&var    /* the adress of the var in memory */

scanf("%f %d %c", &var1, &var2, &var3); /* gets values for var1, var2 and var3 */
/* var1 is a float */
/* var2 is a integer */
/* var3 is a character */

```



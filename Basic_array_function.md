1. an array is a data structure that is used to store multiple values of similar data types in a contiguous memory location.
2. Once an array is declared its size remains constant throughout the program.
3. An array can have multiple dimensions.
4. We have initialized the array with values but we have not declared the length of the array, therefore, the length of an array is equal to the number of elements inside curly braces.
       ( int arr[] = {1, 2, 3, 4, 5}; )
5. Here, we have declared an array ‘partialArray’ with size ‘5’ and with values ‘1’ and ‘2’ only. So, these values are stored at the first two indices, and at the rest of the indices ‘0’ is stored.
       (  int partialArray[5] = {1, 2};  )
6. We can initialize the array with all elements as ‘0’ by specifying ‘0’ inside the curly braces. This will happen in case of zero only if we try to initialize the array with a different value say ‘2’ using this method then ‘2’ is stored at the 0th index only.
            (   int zero_array[5] = {0};   )
7. In C++, arrays and pointers are closely related to each other. The array name is treated as a pointer that stored the memory address of the first element of the array.array name ane pointer contain gthe same starting address but address of array pointer cannot be changed but pointer changes.
8. Array element can be accessed in two ways -
i) by index or ii)by pointer(address)
9. multi-dimensional array
i) 2D
   data_Type array_name[n][m];
Where,

n: Number of rows.
m: Number of columns.
(same as matrix)

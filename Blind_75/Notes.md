1) CONTAINS DUPLICATE:
Think about reducing the loop usage. We sort the vector first and check the vector only witht he next element

2) VALID ANAGRAM:
Think about counting each character in each string. Using unordered map, for first string, count each char and do ++.
For the next string, count each char and do --. If the value of the map (map.second) is 0, then true else false.

3) TWO SUM:
Instead of thinking of summing with 2 iterations, think about only 1 iteration and 1 constant i.t target. Create hash table with 
keys as elements and values as index. Iterate over the vector and subtract and check the count of the subtract and get its index.

4) GROUP ANAGRAMS:
Create a hash table with keys as string and value as vector of string. For each item, sort it and make it as key and pushback 
unsorted item. A single key will have multiple objs in value of vector. Later, access the second of the map and append in a vec of vectors.

5) TOP K FREQUENT ELEMENTS:
Create hash table <int, int> to store element as key and i++ as value. In new vector, using freq as indices, pushback hash table.first elements.
Looping over, when size = k, stop and return the new resultant vector.

5) PRODUCT OF ARRAYS EXCEPT SELF:
Instead of thinking in terms of an int storing product, consider vector storing running product.
Left: running_prod_left[i] = running_prod_left[i-1] * nums[i-1]; Right: running_prod_left[i-1] = running_prod_right[i] * nums[i]; 
result[i] = running_prod_left[i] * running_prod_right[i];
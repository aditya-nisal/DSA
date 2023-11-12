1) CONTAINS DUPLICATE:
Think about reducing the loop usage. We sort the vector first and check the vector only witht he next element

2) VALID ANAGRAM:
Think about counting each character in each string. Using unordered map, for first string, count each char and do ++.
For the next string, count each char and do --. If the value of the map (map.second) is 0, then true else false.

3) TWO SUM:
Instead of thinking of summing with 2 iterations, think about only 1 iteration and 1 constant i.t target. Create hash table with 
keys as elements and values as index. Iterate over the vector and subtract and check the count of the subtract and get its index.

4) 
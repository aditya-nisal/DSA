(I) Arrays and Hashing

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

6) PRODUCT OF ARRAYS EXCEPT SELF:
Instead of thinking in terms of an int storing product, consider vector storing running product.
Left: running_prod_left[i] = running_prod_left[i-1] * nums[i-1]; Right: running_prod_left[i-1] = running_prod_right[i] * nums[i]; 
result[i] = running_prod_left[i] * running_prod_right[i];

7) ENCODE AND DECODE STRINGS:  
In vector, add "$" to each string and add each element to an ampty string to get encoded string. For decoded string, loop over each index untill length of the enceoded string>0. In the loop, if element is not "$", add that element to a string variable word. If element is "$", erase string before that, push_back word to result vector and erase word string. 

8)LONGEST CONSECUTIVE SEQUENCE:
Make a hash map of only keys which are int and no values and store array element as the key. For each key, find num-1. If not found, try to find num+1 and save
it as current num and find current num+1 and so on. Use a while loop on for loop and keep on finding current seq and max of cur_seq and long_seq is long_seq.


(II) Two Pointers

1) VALID PALINDROMES:
First remove all the non alpha numeric chars and create a separate string. start a for loop looping the new string from start and a var string.size() -1 reducing it. Lower all the cases of string and check if the int val of each char fall between [97, 122], and it is a digit(idigit(i)). If ith element and nth element is not same, return 0. At the end, return 1.

2) THREE SUM:
Loop over the vector such that one of the number is fixed. Then, using a 2 pointer approach, start from first and last element and put conditions on them.

3) CONTAINER WITH MOST WATER:
Start with 2 pointers: one from left and other from right. Loop untill left pointer is less than right. ++ operator on the pointer with less length. Store area in a area variable and keep checking with max_area variable. 3 Condiitons: i<j, j<i, i=j

(III) Sliding Window

1) BEST TIME TO BUY AND SELL STOCKS:
Instead of thinking about 2 pointers, think of a single for loop. Check and update the min element in every iteration. Profit_today = each element - min. If the profit<profit_today, we set Profit = Profit_today. 

2) LONGEST SUBSTRING WITHOUT REPEATITION:
Start with 2 pointers: one initiated as normal int=0 and other in a for loop. Use a unordered set of type char. If a character is not found in set, insert when iterating in for loop. Elee, in a while loop when cuint !=0, keep on incrementing first pointer so as to get a longest string as we try to remove one element from start (using 1st pointer) and check if the next one exists in the set.

3)

(IV) Stack

1) VALID PARANTHESIS:
Create a stack of char. Loop over string to check for open brackets and add to stack. If closed bracket and stack is empty-> return false. else, get the top element and pop it. Now, check what paranthesis the top element is and get the closing pair to it. If the stack is empty-> rue else false.

(V) BINARY SEARCH:

1) MINIMUM IN ROTATED SORTED ARRAY:
Iterate the whole array in a while loop while start<end. In this, mid = start+(end-start)/2. If nums[mid]>nums[end]->start will be mid+1. Else, end is mid.

2) SEARCH IN ROTATED SORTED ARRAY:
Set 2 pointers, start=0 and end=nums.size()-1. Iterate while start<=end. Check if else ocnditions for which partition to check.
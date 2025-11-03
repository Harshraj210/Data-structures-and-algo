Time Complexity is a way to measure how much longer an algorithm will take to run as its input size grows

Imagine you have a phone book 📖 with 1,000 names (so, $n = 1000$) and you need to find "John Smith".Algorithm 

A (Linear Search): You read every name, one by one, from the very first page. In the worst case, you have to read all 1,000 names.If the phone book doubles in size (to 2,000 names), this algorithm will take twice as long.

Algorithm B (Binary Search): You open to the middle page. "J" comes before "M", so you tear the book in half and throw away the second half. You repeat this, always dividing the problem in half. You'll find the name in about 10 steps.If the phone book doubles in size (to 2,000 names), this algorithm will take just one extra step (11 steps).

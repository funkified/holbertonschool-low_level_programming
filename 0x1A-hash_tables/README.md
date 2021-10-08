Hash Tables

A hash function is any function that can be used to map data of arbitrary size to fixed-size values. The values returned by a hash function are called hash values, hash codes, digests, or simply hashes. The values are usually used to index a fixed-size table called a hash table. Use of a hash function to index a hash table is called hashing or scatter storage addressing.
Hash functions and their associated hash tables are used in data storage and retrieval applications to access data in a small and nearly constant time per retrieval. They require an amount of storage space only fractionally greater than the total space required for the data or records themselves. Hashing is a computationally and storage space-efficient form of data access that avoids the non-linear access time of ordered and unordered lists and structured trees, and the often exponential storage requirements of direct access of state spaces of large or variable-length keys.

What makes a good has function:

Writing good hash functions is an active area of research for computer scientists and number theorists, so we won't become experts at doing this. But there are a couple of general principles that are used to minimize collisions:

 - The hash function should produce any integer in its range, with equal probability. (Like we just said.)

 - The hash function should depend somehow on the entire key. For example, if you are hashing a string, you had better make it depend on every character in the string!

 - The hash function should be somehow "strange", not conforming to any patterns that might occur in the data itself. For example, if you are storing prices at a convenience store, many of them will end in 99 cents. If you are storing the displayed names of USNA students, many of them will start with MIDN. A great hash function can take in a very non-random set of keys and produce a bunch of integer hashes that look totally random. This point is closely related to the first bullet about equal probability values.


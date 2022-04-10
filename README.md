### In this case, i have learned some problems which would be happened
### cerelessly, especially when it comes to mixing with pointer to struct 
### array. We should be careful in using pointer to struct array. The 
### following is my experience: 
#### 1. use pointer++ carefully in case run out of the array boundary.
#### 2. when pointer points to an unsafe address, may be the program can
#### be complied but it doesn't work.
#### 3. pointer pointing unsafe address or uninitialized data will display
#### wrong data, it may be the uninitialized data placed in wrong address.
#### 4. just correct the wrong pointing address, problems will solved.

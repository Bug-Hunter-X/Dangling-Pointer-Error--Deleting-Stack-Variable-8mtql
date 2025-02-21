# Dangling Pointer Error in C++
This repository demonstrates a common C++ error: attempting to delete a pointer to a stack variable.  The code in `bug.cpp` shows the erroneous code, while `bugSolution.cpp` provides a corrected version.

**Problem:**
In C++, memory allocated on the stack is automatically managed. Trying to use `delete` on a stack variable leads to undefined behavior and potential crashes. 

**Solution:**
Dynamic memory allocation using `new` should be paired with `delete` to avoid this issue.  If memory is allocated on the stack, no explicit deallocation is necessary.
/* Values vs Indices
In the code below, A is an array of integers of length size. 
Both of these variables have been declared and initialized in hidden code.
Write code to assign the value of the variable count to the number of elements 
of A where the element's value is the same as its index.
*/

count = 0;
int i;
for (i = 0; i < size; i++ ) {
    if (i == A[i]) {
        count++;
    }
}

/* Formatting Phone Numbers
Some people write phone numbers like this 416-967-1111 and other people write them like this 905.736.3636.

For this problem, you will write a fragment of C code that takes phone number formatting with dots
(the latter version) and changes it to have dashes (the former version).

The variable phone_number is a 12 element array of characters with dots,
after the area code and after the next 3 digits. Change those dots to dashes.
*/

phone_number[3] = '-';
phone_number[7] = '-';

/*Find the checksum
In the code fragment below an integer array named command has been declared an initialized in hidden code.
The size of the array is stored in the variable size (also hidden).

A checksum of an array is equal to the sum of the elements located at odd-numbered indices
(1, 3, ...) minus the sum of the elements located at even-numbered indices (0, 2, ...).

For example, the checksum of an array containing the elements
{3, 2, 10, 5} is -6, and is calculated like so: (2 + 5) - (3 + 10).

Write C instructions to set the variable check_sum equal to the checksum for the array.
*/

int i;
int odd_total = 0;
int even_total = 0;
for (i = 0; i < 10; i++) {
    if (i % 2 == 0) {
        even_total += command[i];
    } else {
        odd_total += command[i];
    }
}
check_sum = odd_total - even_total;

/*Zero Out
A is an array of length size of doubles. Your task is to set some of the values in A to 0. 
positions is an array of length size_positions of integers that represent that indices
of the elements of A that you should reset.
*/
No solution?


/*Array Reflections
Given an array A of size integers, declare and set values in an array B 
that is twice as long as A where every element of A appears twice in B: 
once in its original position, and a second time in the second half of B.
The new occurrence should be the same distance from the end of B 
as the first occurrence was from the beginning. For example,
if A is the array {1, 2, 5, 7}, then
B will be {1, 2, 5, 7, 7, 5, 2, 1}.
*/
int i; 
int B[size * 2];
for (i = 0; i < size; i++) {
    B[i] = A[i];
    B[(2 * size) - i - 1] = A[i];
}


/*How Mutated?
In this problem, A is an array of size characters that has been declared
and initialized in hidden code. You must call the
function mutate passing it A and the size of A.

mutate has the signature
void mutate (char Arr[], int size);

After the call, you must set the variable changed to the number of 
characters that were changed in A by the call to mutate.
Hint: Make a copy of A before you call the function and then 
after the call, compare your copy to the mutated version of A.
*/

changed = 0;
char copy[size];
int i;
for (i = 0; i < size; i++) {
    copy[i] = A[i];
}
mutate(A, size);

for (i = 0; i < size; i++) {
    if (A[i] != copy[i]) {
        changed++;
    }
}


/*Array Addressing 1
If the address of integer array A is 0x00007ffd29c78e70 and an integer is 4 bytes,
what is the address of element A[1]? (Put the address itself in the box
below including the 0x at the start.)
*/
0x00007ffd29c78e74

/*Array Addressing 2
If the address of char array C is 0x00007ffc675f9cb0, what is the address of element C[6]? 
(Put the address itself in the box below including the 0x at the start.)
*/
0x00007ffc675f9cb6

/*Array Addressing 3
We have an array declared as follows:
int arr[3];
Assuming integers are stored as 4 bytes and the address of arr is 0x00007ffe395f5450,
which of the following statements are true?
*/

The address of arr[0] is 0x00007ffe395f5450.
The address of arr[2] is 0x00007ffe395f5458.
The address of arr[4] is 0x00007ffe395f5460 but it would be unsafe to store a value at this address.

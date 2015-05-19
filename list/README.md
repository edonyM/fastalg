# ***LIST IN C++(STL)***
------------
### **Summary of list:**
* dynamic memory control
* high efficient delete&insert operation
* generic for data member
* low efficiency traversal

------------
### **Builtin library for list implement**

Actually, the STL does not have the pure list library. You use list with help of ```vector```, ```list```.
> ```c++
> // use vector
> #include <vector>
> using std::vector;  // NOTE(edony): to avoid namespace polution, you'd better ignore this statement.
> 
> // use list
> #include <list>
> using std::list;    // NOTE(edony): comment on vector.
> ```
STL list is, particularly, a double list(```DList```) and helpful to delete and insert. Vector is a default choice to use as a container.

### **Operation of STL vector&list**
```c++
// vector initialization
vector<int> int_vector_init;  //default int vector initialization
vector<int> int_vector_init_copy(int_vector_init);
int element_num = 10;
vector<double> double_vector_init_members(element_num);
vector<double> double_vector_init_members_1(element_num, 1.0);

// vector operations
double_vector_init_members.size();      //element_num
double_vector_init_members.empty();     //return 0 for notempty
double_vector_init_members.capacity();  //maximum number of element
double_vector_init_members = double_vector_init_members_1;      //assignment
double_vector_init_members.swap(double_vector_init_members_1);  //swap between two vectors

printf("the %d member is %ff\n",0,double_vector_init_members[0]);         //#include <cstdio>
printf("the first member is %ff\n", double_vector_init_members.front());  //#include <cstdio>
printf("the last member is %ff\n", double_vector_init_members.back());    //#include <cstdio>
double_vector_init_members[2] = 3.14;

//iteroator of vector
double_vector_init_members.rend();
double_vector_init_members.begin();  //pointer of first member

double_vector_init_members.rbegin();
double_vector_init_members.end();    //pointer to the position after last member and it is a reminder of the vector for iteration

//insert and remove
vector<int>::const_iterator iter = double_vector_init_members.begin();
double_vector_init_members.insert(iter + 3, elem);     //insert element after fourth member
double_vector_init_members.insert(iter + 3, 5, elem);  //insert 5 elements after fourth member
double_vector_init_members.push_back(elem);            //insert element at the end of vector
double_vector_init_members.erase(iter + 3);            //delete fourth element in vector
double_vector_init_members.clear();                    //delete all elements in vector
double_vector_init_members.resize(8);                  //change the number of vector's elements as 8

/***************************************************/
/*
 *list initialization
 *list operation
 *list iterator
 *list insert and remove
 *THE SAME WITH VECTOR
 */
//new operations
list<int> int_list(10,2);
list<int> int_list_1;
int_list.unique();  //remove the duplicates of elements with the same value
int_list.unique(func);  //remove the duplicates of elements if func() yields true
int_list.splice(pos, int_list_1);  //move all elements in int_list_1 into the front of the pos of int_list
int_list.sort();
int_list.merge(int_list_1);  //assume that the list are sorted, move all the elements of int_list_1 into int_list so that all the elements are merged and sorted
int_list.reverse();  //reverse the order of the all elements
```

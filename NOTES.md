# Data structures
A specialized format for organizing, processing, retrieving and storing data.
- linear data structures,
- tree data structures,
- hash data structures
- and graph data structures.

## The way to actually do DS in the right way ?
### _Arrays ----> pointers ----> struct node ----> linked list ----> double linked list ----> Tree ----> binary tree ---> Binary search tree ---> AVL tree, graphs, heaps stack & etc._
![TYPES OF DATA STRUCTURE](https://github.com/Mragankk/Cpp/assets/145200189/f4b2548a-d29b-4303-a11e-87c56f73434a)

----------
- Compound Data Structure - Simple Data structure can be combined in various ways to form more complex structures called Compound Data Structure. There are two types of Compound Data Structures:
  - Linear - a DS is said to be linear if its elements form a sequence. they are single level. They are Stacks, queues, linked list
  - non- linear - These are multiple.  they cannot make sequence. They are Trees and graphs
 
  ## Types of data structure
  * **Arrays:** a named list of similar data types, referenced by a common name and different index. If the name of the index is AET then its indexes are 0,1,2,3,.... 9 and the elements will be referenced as AET[0], AET[1].....AET[9].
  * **Structures:** It is a named collection of the same or different data types. the elements of a structure are referenced using a dot operator.
  * **stack**: it allows adding or removing elements in the particular order. Every time an element is added it goes on the top of the stack the only element that can be removed is the element that was at the top of the stack. **Uses the term LIFO(Last IN First Out)**
    * push-add an element at the top of the stack
    * pop-to remove an element from the top of the stack
    * peek-to display an element on the top of the stack
   
  *  **Queues** data structures are FIFO(First In First Out) lists where insertions are take place at the REAR end of the queue and deletions take place at the FRONT end of the queue. When a Queue is created an array, its number of elements is declared before processing. The beginning of array becomes its Front end and the end of the array becomes its Rear end. Front stores the index of first element in the queue and Rear stores the index of last element in the queue.
    *  Enqueue – Insert new element at Rear end of the queue
    *  Dequeue – Delete the element from Front end of the queue
    *  Peek To display the element at the FRONT of the queue
    *  Display To display all the elements of the queue
 * **Linked Lists** : It is a linear data structure that consists of a sequence of nodes, where each node contains data and a reference (or pointer) to the next node in the sequence. Unlike arrays, which have a fixed size, linked lists can grow or shrink dynamically during program execution. They are useful for situations where the size of the data is not known beforehand, and you need to add or remove elements frequently. However, they have some disadvantages such as inefficient access to individual elements and the need for extra memory for storing the references. Linked lists can be used to implement various data structures such as stacks, queues, trees and graphs.

![image](https://github.com/Mragankk/Cpp/assets/145200189/c233ec1f-6ecc-4a66-996d-17ece9228043)



  * **Tree**: It is a hierarchical data structure that consists of nodes connected by edges or branches. Each node in a tree may have zero or more child nodes, except for the root node, which has no parent. The tree is often used to represent hierarchical structures like file systems, organization charts, or family trees. The topmost node in a tree is called the root, and each node in the tree can have any number of children. Nodes with no children are called leaf nodes or terminal nodes. The path from the root node to any node in the tree is called a path, and the length of the path is the number of edges along that path.
![image](https://github.com/Mragankk/Cpp/assets/145200189/af27d2b7-6f86-4ff1-b71e-8c1500b2d601)




* **Graph**: It is a data structure consisting of a set of vertices (also called nodes or points) and a set of edges that connect pairs of vertices. A graph can be used to represent a variety of things, such as roads and cities in a map, social networks, or dependencies between tasks in a project. Each vertex in a graph can have zero or more edges connecting it to other vertices, and an edge can be directed (going from one vertex to another) or undirected (going both ways). A graph with directed edges is called a directed graph or a digraph, while a graph with undirected edges is called an undirected graph.

![image](https://github.com/Mragankk/Cpp/assets/145200189/f1181c99-5b77-47bc-a55a-e6057d4b5bdf)




  ------------------------
  # The important player in almost alll the games
  ## OOPs
  _Object-Oriented Programming (OOP) is a programming paradigm based on the concept of "objects," which encapsulate data and behavior, promoting modularity, reusability, and maintainability in software development._



![image](https://github.com/Mragankk/Cpp/assets/145200189/f8177fcd-e9b0-425d-af67-b2a87d9c9eab)


### 1. Encapsulation
- **Class**: Blueprint for creating objects. Defines attributes (data) and methods (functions).
- **Object**: Instance of a class. Represents a unique entity with its own state and behavior.
- **Encapsulation**: Bundling data and methods into a single unit (class). Hides internal state, exposing only necessary functionality through methods.

### 2. Inheritance
- **Inheritance**: Allows a class (subclass/child) to inherit properties and behaviors from another class (superclass/parent).
- **Method Overriding**: Subclass provides a specific implementation of a method already defined in its superclass.
- **Polymorphism**: Objects of different classes treated as objects of a common superclass.

### 3. Abstraction
- **Abstraction**: Simplifying complex systems by hiding unnecessary details and showing essential features.
- **Constructor**: Special method called when an object is instantiated. Used to initialize the object's state.
- **Destructor**: Special method called when an object is destroyed or goes out of scope. Used for cleanup tasks.

### 4. Polymorphism
- **Polymorphism**: Ability to have multiple forms. Objects of different classes can be treated as objects of a common superclass.
- **Composition**: Design principle where complex objects are created by combining simpler objects.
- **Method Overriding**: Subclasses provide specific implementations of methods inherited from their superclass.

Each pillar plays a crucial role in OOP, contributing to the design and implementation of modular, reusable, and maintainable code.
These concepts collectively form the foundation of Object-Oriented Programming.

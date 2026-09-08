   /**
    * Reusability is a ery imp features of OOPs
    * In C++ we can reuse a class and add additional features to it
    * Reusing classes saves time and money
    * Reusing already tested and debugged class will save a lot of effort of developing and debugging the same thing again 
    * DRY = Do not Repeat Yourself
    * ->
    * The concept of reusability in C++ is suppored using inheritance
    * We csn reuse the properties of an existing class by inheriting from it
    * The existing class is called as --> BASE CLASS <--
    * The new class which is inherited is called as the --> DERIVED CLASS <--
    * Types of inheritance in C++   
        *   -> Single Inheritance
        * A derived class with one base class  ex-
        *                                    A
        *                              ->   |Or^   <-
        *                    A derives B    v  |     B is derived from
        *                                    B
        *   -> Multiple Inheritance
        * 
        *   -> Hierarchical Inheritance
        *   -> Multilevel Inheritance
        *   -> Hybrid Inheritance
        * refer notebook notes for better explaination
    *   
    *  
    */

    //Derived Class syntax
// class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
// {
//     class members/methods/etc....
// }
  
     /**VISIBILITY MODE 
 * default visibility mode is private
 * it can either be public or private
 * The way how we inherit our class....
 * if we inherit it publicly
 *  -> then the public members of your base class will become the public members of your derived class
 * if we inherit it privately
 *  -> then your base clsas public members will become the private members of your derived class 
*/
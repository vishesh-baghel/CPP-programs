oops is a programming paradigm(style) based on the concepts of objects.

How to we model real-world data into classes ?
1- Abstraction
2- Encapsulation
3- Inheritance
4- Polymorphism

How OOP is implemented in JS ?
All objects are linked with prototype. It is known as prototypal inheritance, The prototype contains methods(behaviours) that are accessible to all objects linked to that prototype

Three ways of making objects
1- constructor functions
2- ES6 classes
3- new object()

const Person = function(firstName, birthYear) {
this.firstName = firstName;

}

new Person('vishesh', 1999);

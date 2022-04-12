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
this.birthYear = birthYear;

this.calcAge = function() {

<!-- console.log(2036 - this.birthYear); --> don't use this, because it deteriorates the performance

}
}

const vishesh = new Person('vishesh', 1999);

const matilda = new Person('Matilda', 2018);

Prototypes:

Person.prototype.calcAge = function() {
console.log(this.birthYear);
}

vishesh.calcAge();

console.log(vishesh.**proto**);
console.log(vishesh.**proto** === Person.prototype);

console.log(Person.prototype.isPrototype(vishesh));

console.log(vishesh.\***\*proto\*\***);
Object.prototype (top of prototype chain)
console.log(vishesh.proto.proto);

console.log(Person.prototype.constructor);
const arr = [2, 5, 6,7];
console.log(arr.proto);

console.log(arr.proto === Array.prototype);
console.log(arr.proto.proto);

Array.prototype.unique = function() {
return [...new Set(this)];
};

console.log(arr.unique());
const h1 = document.querySelector('h1');

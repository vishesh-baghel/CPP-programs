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

Coding challenge 1
const Car = function(make, speed) {
this.make = make,
this.speed = speed,
}

Car.prototype.accelerate = function() {
this.speed += 10;
console.log(`${this.make} is going at ${this.speed}km/h);
}

Car.prototype.brake = function() {
this.speed -= 5;
console.log(`${this.make} is going at ${this.speed}km/h);
}

const car1 = new Car('BMW', 200);
const car2 = new Car('Mercedes', 100);

car1.accelerate();
car2.brake();

ES6 classes in JS:

const PersonCl = class {}

class PersonCl {
constructor(firstName, birthYear) {
this.firstName = firstName;
this.birthYear = birthYear;

calcAge() {
console.log(2022 - this.birthYear);
}

get age() {
return 2022 - this.birthYear;
}

set fullName(name) {
if (name.includes(' ')) this.fullName = name;
else alert(`${name} is not a full name`);
}

}
}

const jessica = new PersonCl('vishesh', 1999);

vishesh.calcAge();

PersonCl.prototype.greet = function() {
console.log(`Hey ${this.firstName}`);
}
vishesh.greet();

*classes are not hoisted
*Classes are first-class citizen
\*Classes are executed in strict mode

Getters and Setters:

const account = {
owner = 'vishesh',
movements = [200, 300, -199],

get latest() {
return this.movements.slice(-1).pop();
}

set latest(mov) {
this.movements.push(mov);
}
}

Static methods:

Person.hey = function() {
console.log('hey');
}

object.create:

const PersonProto = {
calcAge() {
console.log(2022 - this.birthYear);
},

init(firstName, birthYear) {
this.firstName = firstName;
this.birthYear = birthYear;
}
}

const steven = Object.create(PersonProto);
console.log(steven);
steven.name = 'Steven';
steven.birthYear = 2002;

steven.calcAge();

console.log(steven.proto === PersonProto)

const sarah = Object.create(PersonProto);
sarah.init('Sarah', 1999);
sarah.calcAge();

Coding challenge:

class CarCl {
constructor(make, speed) {
this.make = make;
this.speed = speed;
}

accelerate() {
this.speed += 10;
}

brake() {
this.speed -= 5;
}

get speedUS {
return this.speed / 1.6;
}

set speedUS(speed) {
this.speed = speed \* 1.6;
}

}

const ford = new CarCl('Ford', 130);
ford.accelarate();
ford.brake();
console.log(ford.speedUS);

Inheritance:

const Student = function(firstName, birthYear, course) {
this.firstName = firstName;
this.birthYear = birthYear;
this.course = course;
}

Student.prototype = Object.create(Person.prototype);

Student.prototype.introduce = function() {
console.log(`My name is ${this.firstName} and I study ${this.course}`);
}

const mike = new Student('Mike', 2022, 'CS');

mike.calcAge();

console.log(mike.proto.proto);
console.dir(Student.prototype.constructor);

Not much today
I have to do something in the coming days

Coding challenge:

const EV = function(make, speed, charge) {
Car.call(this, make, speed);
this.speed = speed;
};
EV.prototype = Object.create(Car.prototype);

EV.prototype.chargeBattery = function(chargeTo) {
this.charge = chargeTo;
};

EV.prototype.accelerate = function() {
this.speed += 20;
this.charge--;

}
const tesla = new EV('TEsla', 120, 23);
tesla.chargeBattery(90);
console.log(tesla);

tesla.brake();
tesla.accelerate();

Inheritance between classes:

class StudentCl extends PersonCl {
constructor(fullName, birthYear, course) {
super(fullName, birthYear);
this.course = course;
}
}

introduce() {
console.log(`My name is ${this.fullName} and I study ${this.course}`);
}

const martha = new StudentCl('Martha Jones', 2022, 'CS');
martha.introduce();

Inheritance between classes with Object.create():

const PersonProto = {
calcAge() {
console.log(2022 - this.birthYear);
},

init(firstName, birthYear) {
this.firstName = firstName;
this.birthYear = birthYear;
},
};

const steven = Object.create(PersonProto);

const StudentProto = Object.create(PersonProto);

StudentProto.init = function(firstName, birthYear, course) {
PersonProto.init.call(this, firstName, birthYear);
this.course = course;
};

StudentProto.introduce = function() {
console.log(`My name is ${this.firstName} and I study ${this.course}`);
}

const jay = Object.create(StudentProto);
jay.init('Jay', 2002, 'CS');
jay.introduce();
jay.calcAge();

Another class example:

class Account {

  <!-- Public fields -->

locale = navigator.language;

<!-- Private fields -->

#movements = [];
#pin;

constructor(owner, currency, pin) {
this.owner = owner;
this.currency = currency;
this.#pin = pin;

<!-- this.\_movements = [];
this.locale = navigator.language; -->

console.log(`thanks for opening an account, ${owner}`);
}

getMovements() {
return this.\_movements;
}

deposit(val) {
this.\_movement.push(val);
return this;
}

withdrawal(val) {
this.deposit(-val);
return this;
}

requestLoan(val) {
if (this.\_approveLoan(val)) {
this.deposit(val);
console.log(`Loan approved`);
return this;
}
}

<!-- Private methods -->

\_approveLoan(val) {
return true;
return this;
}
}

const acc1 = new Account('vishesh', 'INR', 1111);

<!-- acc1.movements.push(230);
acc1.movements.push(-100); -->
<!-- we can put an extra layer of abstraction to make it more good -->

acc1.deposit(240);
acc1.withdrawel(200);
acc1.requestLoan(1000);
acc1.approveLoan(1000);

console.log(acc1.getMovements());
console.log(acc1);

Encapsulation implementation using class fields:

<!-- Public fields -->
<!-- Private fields -->
<!-- Public methods -->
<!-- Private methods -->

<!-- Chaining -->

acc1.deposit(200).deposit(300).withdraw(200).requestLoan(200).withdraw(300);
console.log(acc1.getMovements());

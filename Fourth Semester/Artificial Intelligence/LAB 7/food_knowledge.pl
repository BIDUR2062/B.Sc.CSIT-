%Question
%Write a program to implement in Prolog following Knowledge
%•	Kheer contains sugar
%•	Haluwa contains sugar 
%•	Pickle contains salt
%•	Dal contains salt
%•	Sweet Dish is a dish which contains sugar
%•	Salt Dish is dish which contains salt.
%Test following statement.
%	List out sweet dishes.
%	List out salt dishes.

%Facts

contains(kheer, sugar).
contains(haluwa, sugar).
contains(pickle, salt).
contains(dal, salt).

% Rules

sweet_dish(X) :-
    contains(X, sugar).

salt_dish(X) :-
    contains(X, salt).

%Queries

?- sweet_dish(X).
?- salt_dish(X).
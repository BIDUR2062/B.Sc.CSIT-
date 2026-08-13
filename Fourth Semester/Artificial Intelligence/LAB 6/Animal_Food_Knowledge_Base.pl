%Question
%Write a program to implement in Prolog following Knowledge
%•	Tiger eats meat
%•	Cow eats Vegetables
%•	Human eats meat 
%•	Human eats Vegetables
%•	Carnivorous eats meat
%•	Carnivorous eats meat and Vegetables
%•	Herbivorous etas Vegetables
%Test following statement.
%	List out the animals that eats meat only.
%	List out the animals that eats Vegetables only.
%	List out the animals that eats meat and vegetables.
%	List out the animals that eats meat.
%	List out the animals that eats vegetables.

%Facts
eats(tiger, meat).
eats(cow, vegetables).
eats(human, meat).
eats(human, vegetables).
eats(carnivorous, meat).
eats(carnivorous, vegetables).
eats(herbivorous, vegetables).

%rules
meat_only(X) :-
    eats(X, meat),
    \+ eats(X, vegetables).

vegetables_only(X) :-
    eats(X, vegetables),
    \+ eats(X, meat).

meat_and_vegetables(X) :-
    eats(X, meat),
    eats(X, vegetables).

eats_meat(X) :-
    eats(X, meat).

eats_vegetables(X) :-
    eats(X, vegetables).


%queries
?- meat_only(X).
?- vegetables_only(X).
?- meat_and_vegetables(X).
?- eats_meat(X).
?- eats_vegetables(X).
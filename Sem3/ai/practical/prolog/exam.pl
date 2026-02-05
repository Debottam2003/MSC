:- dynamic child/1.

% Facts
reindeer(rudolph).
rednose(rudolph).

% Rules
loves(X, santa) :- child(X).
loves(X, Y) :- loves(X, santa), reindeer(Y).

weird(X) :- rednose(X).
clown(X) :- rednose(X).

not_clown(X) :- reindeer(X).
not_loves(scrooge, X) :- weird(X).

contradiction :-
    loves(scrooge, rudolph),
    not_loves(scrooge, rudolph).

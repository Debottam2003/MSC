% Knoledge Base or Fatcs
girl(okudera).
boy(debottam).

% Rules
wife(X, Y) :-
   girl(X),
   boy(Y),
   X \= Y.
# Party-Invitation-Graphical-Algorithm

A Lady wants to host a party and to determine whom
to be invited. She has n persons to choose from, and she has made up a list
for the pairs of these n persons knowing each other (i.e. not necessarily all
know each other). She wants to invite as many as possible persons, subject to
the constraints: for each person attending the party (i) at least k << n other
persons who know (ii) at least k persons in the party who do not know.

Here I develop an algorithm which solve the problem effectively and the outcome was as follows:

The Algorithm complexity was linear for determining the invitees as O[n] whereas
creating the random matrix was exponential O[n^2 + M], so given the relationship matrix
would make the whole algorithm very efficient.

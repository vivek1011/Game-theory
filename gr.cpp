Sprague–Grundy theorem, which reduces every such game to a game of Nim.

 Sprague-Grundy theorem reduces the state of every such game to a single Nim 
 pile of a certain size. This pile size is called the nimber/Grundy number of the state.
 
 . A game composed of K solvable subgames with Grundy numbers G1, G2 … GK is winnable iff 
 the Nim game composed of Nim piles with sizes G1, G2 … GK is winnable.
 
 Suppose that we have calculated the Grundy numbers of all states we can move to from the 
 state currently under consideration. Then the Grundy number of the current state is the
 smallest whole number which is not the Grundy number of any state that can be reached in 
 the next step (This is in direct analogy with what happens in Nim. If a Nim pile has n 
 coins, we can remove coins to get 0,1…n-1 coins in the next step. The lowest number not
 reachable is n, thus a single Nim pile with n coins is equivalent to current state).  

 Examples : https://www.hackerrank.com/contests/university-codesprint/challenges/bob-and-ben

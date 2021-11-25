# Royal-Software-Engineer

Language: C++

A university project revolving around a solution implementation for a fictional "Royal Software Engineer" problem. The "story" of the project can be found below, although the gist of the project itself can mostly be found in the number points at the bottom. The focus of the project is around data reading and iterative sorting algorithms performed on map and vector data stuctures.

A long time ago, a great wall was built along the northern border of an ancient kingdom. After the wall was finished, an artist walked along the wall from west to east, decorating the southern side of each top brick with a unique symbol.

The artist's apprentice was instructed to follow and copy each symbol onto the northern side of each brick. However, the apprentice made a mistake. Instead of copying each symbol onto the back of the same brick, the apprentice actually copied the symbol onto the back of the next brick along. That is, he drew the symbol from southern side of the first brick onto the northern side of the second brick, the symbol from the southern side of the second brick onto the northern side of the third brick, and so forth all the way along the wall. When he reached the eastern end, he realised his mistake, as there was no brick on which to draw the final symbol. In panic, he removed the first brick from the wall, and destroyed it.

The years passed, and the local people gave names to the symbols decorating the wall. They carved these names beneath the symbol on (both sides of) each brick. Many years later, an earthquake shook the kingdom, and the wall came crashing down. Saddened, the King ordered all of the decorated bricks to be brought to his palace. Upon examining the heap of bricks, the Royal Data Scientist observed that it was readily apparent which was the north and south side of each brick, as exposure to sunlight had caused the symbols on one side of the wall to fade more than the other. Thus there was enough information to efficiently determine the original sequence of symbols.

The Royal Software Engineer noted that processing the symbol names would be more efficient than processing images of the symbols, and proposed the following algorithm for computing the original sequence:

Create a data structure suitable for efficient searching.
1. Load the information from each brick into the data structure.
2. Create a data structure suitable for storing the resulting sequence of symbol names.
3. Arbitrarily choose one brick as a starting point, and insert the two symbol names into the result sequence, northern name followed by southern name.
4. Perform a search to identify the brick that comes next to the east, and, if found, insert the new symbol name from that brick at the back of the result sequence.
5. Repeat this step until the easternmost brick has been found.
6. Now return to the starting brick.
7. Perform a search to identify the brick that comes next to the west, and, if found, insert the new symbol name from that brick at the front of the result sequence. Repeat this step until the westernmost brick has been found.

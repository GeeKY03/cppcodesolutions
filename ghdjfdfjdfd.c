10

W

gs Check pa

to

Find K Length Suba..

A Product Array Pu...

tc

Smallest positive n

Job in Cisco, Inc

C

What is the value of the variable tree after the following code runs?

anguage C

1 typedef std::map<std::string, std::shared_ptr<void>> M;

2 typedef std::vector<std::string> S;

3

4 void build word tree from sentences (const S& sentence list, M& root)

50

6

7

8

for (const auto& sentence: sentence list) {

std::string word; std::stringstream ss(sentence);

9 10

11

12

13

M base &root; =

while (ss >> word) {

auto found base->find (word)

if (base->find (word) == base->end()) { base->insert(std::make_pair(word, std::make_shared<M>()));

14 15

16

auto b = base->find (word) ->second;

base= std::static_pointer_cast<M>(b).get();

17

18

19} 20

21

int main(int argc, char* argv)

zz (

23

24

S sentence list ("Hello world", "Hello there"}; =

M tree; build word_tree_from_sentences (sentence list, tree);

25 26 }

elect the correct answer:

וח
#ifndef CONTINUE_H_INCLUDED
#define CONTINUE_H_INCLUDED

bool cont() {
    char input;
    bool outcome;

	std::cout << "Continue (y/n): ";
	std::cin >> input;

	if (input == 'y') {
        outcome =  true;
    }
	else if ( input == 'n') {
        outcome = false;
	}
	else cont();

    std::cin.ignore();

	return outcome;
}

#endif // CONTINUE_H_INCLUDED

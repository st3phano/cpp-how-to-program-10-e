//Return a number based on student's average
unsigned qualityPoints(unsigned average) {
	if (average >= 90) {
		return 4;
	}
	else if (average >= 80) {
		return 3;
	}
	else if (average >= 70) {
		return 2;
	}
	else if (average >= 60) {
		return 1;
	}
	else {
		return 0;
	}
}

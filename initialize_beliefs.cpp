#include "headers/initialize_beliefs.h"

using namespace std;

// OPTIMIZATION: pass large variables by reference
vector< vector <float> > initialize_beliefs(vector< vector <char> > grid) {

	// OPTIMIZATION: Which of these variables are necessary?
	// OPTIMIZATION: Reserve space in memory for vectors
  	int height = grid.size();
	int width = grid[0].size();
  	vector< vector <float> > newGrid (height, vector<float> (width, 1/(height, width)));
// 	vector<float> newRow;
// 	int i, j, height, width, area;
// 	float total, prob_per_cell;


 
// 	area = height * width;

//   	prob_per_cell = 1.0 / ( (float) area) ;

  	// OPTIMIZATION: Is there a way to get the same results 	// without nested for loops?
// 	for (i=0; i<grid.size(); i++) {
// 		newRow.clear();
// 		for (j=0; j<grid[0].size(); j++) {
// 			newRow.push_back(prob_per_cell);
// 		}
// 		newGrid.push_back(newRow);
// 	}
	return newGrid;
}
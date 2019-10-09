int* rec_merge_sort(int*, int , int);
int* merge(int*, int, int*, int);
void display_array(int*, int);

void merge_sort(int* data, int size) {
	int* result = rec_merge_sort(data, 0, size - 1);
	for (int i = 0; i < size; i++)
		data[i] = result[i];
}

int* rec_merge_sort(int* data, int left_bound, int right_bound) {
	int size = right_bound - left_bound + 1;
	if (size >= 3) {
		int* a = rec_merge_sort(data, left_bound, left_bound + size / 2 - 1);
		int* b = rec_merge_sort(data, left_bound + size / 2, right_bound);
		return merge(a, size / 2, b, right_bound - left_bound - size / 2 + 1);
	} else if (size == 2) {
		int *result = new int[2];
		if (data[left_bound] < data[right_bound]) {
			result[0] = data[left_bound];
			result[1] = data[right_bound];
		} else {
			result[0] = data[right_bound];
			result[1] = data[left_bound];
		}
		return result;
	} else if (size == 1) {
		int *result = new int[1];
		result[0] = data[left_bound];
		return result;
	}
}

int* merge(int* data1, int size1, int* data2, int size2) {
	int merged_data_size = size1 + size2;
	int* merged_data = new int[merged_data_size];
	int i = 0, j = 0;
	for (int k = 0; k < merged_data_size; k++) {
		if (j >= size2 || (i < size1 && data1[i] < data2[j]))
			merged_data[k] = data1[i++];
		else if (i >= size1 || (j < size2 && data1[i] >= data2[j]))
			merged_data[k] = data2[j++];
	}
	return merged_data;
}
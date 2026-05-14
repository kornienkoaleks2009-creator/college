void shrink_to_fit() {
    if (size == capacity) return;
    
    if (size == 0) {
        delete[] data;
        data = nullptr;
        capacity = 0;
        return;
    }
    
    int* new_data = new int[size];
    for (size_t i = 0; i < size; i++) {
        new_data[i] = data[i];
    }
    
    delete[] data;
    data = new_data;
    capacity = size;
}

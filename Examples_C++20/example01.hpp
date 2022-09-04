Promise<int> ex01_function() {
  return Promise<int>::resolve(1);
}

void example01() {
  ex01_function().Then([](int& result) {
    cout << "ex01: result=" << result << "\n";
  });
}

void main() { example01(); }

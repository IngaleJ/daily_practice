// bubble sort
function bubbleSort(array) {
  let arr = [...array];
  let n = arr.length - 1;
  for (let i = 0; i < n; i++) {
    for (let j = 0; j < n - i; j++) {
      if (arr[j] > arr[j + 1]) {
        let temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }
  return arr;
}

console.log(
  "ans is ",
  bubbleSort([21, 3, 45, 6, 92, 11, 12, 16, 24, 1])
);

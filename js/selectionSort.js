// selection sort
function selectionSort(array) {
  let arr = [...array];
  let n = array.length;
  for (let i = 0; i < n; i++) {
    // find minimum from current index
    let minimum = Infinity;
    let minIndex = 0;
    for (let j = i; j < n; j++) {
      if (arr[j] < minimum) {
        minimum = arr[j];
        minIndex = j;
      }
    }
    // swap logic
    let temp = arr[i];
    arr[i] = minimum;
    arr[minIndex] = temp;
  }
  return arr;
}

console.log(
  "ans is ",
  selectionSort([21, 3, 45, 6, 92, 11, 12, 16, 24, 1])
);

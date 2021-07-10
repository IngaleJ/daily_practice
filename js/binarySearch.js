// binary search
function binarySearch(array, key) {
  console.log("array is", ...array, "key is", key);
  let start = 0;
  let end = array.length - 1;

  while (start <= end) {
    let mid = Math.floor((start + end) / 2);
    // console.log(mid);
    if (array[mid] === key) {
      return mid;
    } else if (array[mid] > key) {
      end = mid - 1;
    } else if (array[mid] < key) {
      start = mid + 1;
    }
  }
  return -1;
}

console.log(
  "ans is ",
  binarySearch([7, 12, 13, 16, 23, 50, 123, 240, 241], 12)
);

console.log(
  "ans is ",
  binarySearch([7, 12, 13, 16, 23, 50, 123, 240, 241], 11)
);

console.log(
  "ans is ",
  binarySearch([7, 12, 13, 16, 23, 50, 123, 240, 241], 241)
);

console.log(
  "ans is ",
  binarySearch([7, 12, 13, 16, 23, 50, 123, 240, 241], 50)
);

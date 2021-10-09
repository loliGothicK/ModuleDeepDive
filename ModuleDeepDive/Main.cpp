import Maybe;
import Result;
#include <concepts>

int main() {
  using namespace mitama;
  // OK
  std::same_as<result<maybe<int>, int>> auto _ = maybe<result<int, int>>{}.transpose();

  // error C2338: `result<T, E>::transpose` can only be used if and only if `T` is a `maybe<_>`.
  result<int, int>{}.transpose();

  // error C2338: DO NOT IMPORT `Result.def`, PLEASE IMPORT `Result` INSTEAD.
  //result<maybe<int>, int>{}.transpose();
}

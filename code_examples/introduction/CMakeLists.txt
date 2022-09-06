add_executable(history_cc98 history_cc98.cpp)
install(TARGETS history_cc98 DESTINATION bin)

add_executable(history_cc11 history_cc11.cpp)
install(TARGETS history_cc11 DESTINATION bin)

add_executable(history_cc17 history_cc17.cpp)
install(TARGETS history_cc17 DESTINATION bin)

add_executable(history_cc20 history_cc20.cpp)
install(TARGETS history_cc20 DESTINATION bin)

add_executable(iterators iterators.cpp)
install(TARGETS iterators DESTINATION bin)

add_executable(sentinels sentinels.cpp)
install(TARGETS sentinels DESTINATION bin)

add_executable(categories categories.cpp)
install(TARGETS categories DESTINATION bin)

add_executable(mental_range mental_range.cpp)
install(TARGETS mental_range DESTINATION bin)

add_executable(mental_sorted mental_sorted.cpp)
# Compile only

add_executable(mental_two mental_two.cpp)
# Compile only

add_executable(mental_find mental_find.cpp)
# Compile only

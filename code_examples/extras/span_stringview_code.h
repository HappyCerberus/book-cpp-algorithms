int c_array[] = {1, 2, 3, 4, 5, 6, 7};
auto arr_view = std::span(c_array, sizeof(c_array)/sizeof(int));

for (auto it = arr_view.rbegin(); it != arr_view.rend(); ++it) {
	// iterate over: {7, 6, 5, 4, 3, 2, 1}
}

const char* c_string = "No lemon, no melon";
auto str_view = std::string_view(c_string);

for (auto it = str_view.rbegin(); it != str_view.rend(); ++it) {
	// iterate over: "nolem on ,nomel oN"
}

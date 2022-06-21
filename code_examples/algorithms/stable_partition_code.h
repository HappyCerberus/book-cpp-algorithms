auto& widget = get_widget();
std::ranges::stable_partition(widget.items, &Item::is_selected);

#pragma once
// #include <imgui.h>
// ...

auto drawmenu() -> void
{
	if (GetAsyncKeyState(VK_INSERT) & 1) { Settings::bMenu = !Settings::bMenu; }

	if (Settings::bMenu)
	{
		ImGui::Begin("ALTER", NULL, ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoCollapse);

		ImGui::SetWindowSize("ALTER", ImVec2(300, 450));

		ImGui::Spacing();

		ImGui::Checkbox("Box ESP", &Settings::Visuals::bBox);
		if (Settings::Visuals::bBox) Settings::Visuals::bBoxOutlined = false;

		ImGui::Checkbox("Corner ESP", &Settings::Visuals::bBoxOutlined);
		if (Settings::Visuals::bBoxOutlined) Settings::Visuals::bBox = false;

		ImGui::Checkbox("Tracers", &Settings::Visuals::bSnaplines);
		ImGui::Checkbox("Distance Trakcer", &Settings::Visuals::bDistance); // Trakcer (sic)
		ImGui::Checkbox("Health-bar Tracker", &Settings::Visuals::bHealth);

		ImGui::End();
	}
}

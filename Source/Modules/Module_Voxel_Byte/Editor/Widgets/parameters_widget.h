#pragma once

#include <Source/Editor/Scene/scene_manager.h>

#include "generator_widget.h"
#include "shaders_widget.h"
#include "automata_widget.h"

class voxel_hcp_parameters_widget_class {
public:
	voxel_hcp_parameters_widget_class() {}
	~voxel_hcp_parameters_widget_class() {}

	scene_manager_class *scene_manager = NULL;

	log_panel_class     *log_panel     = NULL;

	void display_voxel_hcp_generation_widget(id_type current_selected_object_id) {
		//printf("parameter_panel_class :: display_voxel_hcp_generation_widget 11\n");

		if (scene_manager == NULL) {
		//	if (log_panel != NULL) log_panel->application_log.AddLog("ERROR : No scene manager defined to extract scene voxel hcp object parameter data from.\n");
			return;
		}

		if (current_selected_object_id < 0) {
		//	if (log_panel != NULL) log_panel->application_log.AddLog("ERROR : Invalid selected ID number given for the current selected hcp voxel object. No object selected\n");
			return;
		}

		voxel_hcp_object_class *voxel_hcp_object_to_execute = scene_manager->entities_manager.get_voxel_hcp_entity_object(current_selected_object_id);	// Pointer to the hcp voxel entity data stored in the Virtual Worlds scene data model
		
		if (voxel_hcp_object_to_execute == NULL) {
			if (log_panel != NULL) log_panel->application_log.AddLog("ERROR : No hcp voxel object defined to perform tasks on.\n");
			return;
		}

		if (ImGui::BeginTabBar("##hcp_voxel_tabs", ImGuiTabBarFlags_None))
		{
			if (ImGui::BeginTabItem("Voxel##hcp_voxel_tab")){
				display_voxel_generation_widget(voxel_hcp_object_to_execute, current_selected_object_id);
				ImGui::EndTabItem();
			}

			if (ImGui::BeginTabItem("Shader##voxel_shader_tab")){
				display_voxel_shader_widget(voxel_hcp_object_to_execute, current_selected_object_id);
				ImGui::EndTabItem();
			}

			if (ImGui::BeginTabItem("Automata##voxel_auto_tab")) {
				display_voxel_automata_widget(voxel_hcp_object_to_execute, current_selected_object_id);
				ImGui::EndTabItem();
			}

			ImGui::EndTabBar();
		}
	}



private:
	voxel_hcp_generation_widget_class voxel_hcp_generation_widget;
	voxel_shaders_widget_class		  voxel_shaders_widget;
	voxel_hcp_autmoata_widget_class	  voxel_hcp_autmoata_widget;

	void display_voxel_generation_widget(voxel_hcp_object_class *voxel_hcp_object_to_execute, id_type current_selected_object_id) {

		//voxel_hcp_generation_widget.voxel_hcp_object_to_execute = scene_manager->entities_manager.get_voxel_hcp_entity_object(current_selected_object_id);
		voxel_hcp_generation_widget.voxel_hcp_object_to_execute = voxel_hcp_object_to_execute;

		if (voxel_hcp_generation_widget.voxel_hcp_object_to_execute == NULL) {
		//	if (log_panel != NULL) log_panel->application_log.AddLog("ERROR : No hcp voxel object defined to perform voxel generation procedure on.\n");
			return;
		}
		//printf("voxel_hcp_generation_widget.voxel_hcp_object_to_execute != NULL ^^^^\n");
		voxel_hcp_generation_widget.log_panel                  = log_panel;
		voxel_hcp_generation_widget.scene_manager              = scene_manager;
		voxel_hcp_generation_widget.current_selected_entity_id = current_selected_object_id;
		//printf("parameter_panel_class :: display_voxel_hcp_generation_widget22\n");
		voxel_hcp_generation_widget.display();
	}

	void display_voxel_shader_widget(voxel_hcp_object_class *voxel_hcp_object_to_execute, id_type current_selected_object_id) {
		voxel_shaders_widget.voxel_hcp_object_to_execute = voxel_hcp_object_to_execute;

		voxel_shaders_widget.log_panel                 = log_panel;
		voxel_shaders_widget.scene_manager             = scene_manager;
		voxel_shaders_widget.current_selected_enity_id = current_selected_object_id;

		voxel_shaders_widget.display();
	}

	void display_voxel_automata_widget(voxel_hcp_object_class* voxel_hcp_object_to_execute, id_type current_selected_object_id) {
		voxel_hcp_autmoata_widget.voxel_hcp_object_to_execute = voxel_hcp_object_to_execute;

		voxel_hcp_autmoata_widget.log_panel                 = log_panel;
		voxel_hcp_autmoata_widget.scene_manager             = scene_manager;
		voxel_hcp_autmoata_widget.current_selected_enity_id = current_selected_object_id;

		voxel_hcp_autmoata_widget.display();
	}
};
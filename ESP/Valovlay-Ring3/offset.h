#pragma once

#include <cstdint>

namespace offset
{
	// global
	constexpr uint64_t uworld_state = 0x8E16E80;//0x8DBC840;//0x90307C0;//ok
	constexpr uint64_t uworld_key = 0x8E16EB8;//0x8DBC878;//uworld_state + 0x38;//ok
	constexpr uint64_t game_instance = 0x1A8;//ok
	constexpr uint64_t persistent_level = 0x38;//ok

	// player
	constexpr uint64_t local_player_array = 0x40;//ok
	constexpr uint64_t local_player_controller = 0x38;//ok
	constexpr uint64_t local_player_pawn = 0x460;//ok

	//camera
	constexpr uint64_t control_rotation = 0x440;//ok
	constexpr uint64_t camera_manager = 0x478;//ok
	constexpr uint64_t camera_position = 0x1240;//ok
	constexpr uint64_t camera_rotation = 0x124C;//ok
	constexpr uint64_t camera_fov = 0x1258;//ok
	constexpr uint64_t oCameraCache = 0x1240;//ok


	// level > actors
	constexpr uint64_t actor_array = 0xA0;//ok
	constexpr uint64_t actor_count = 0xB8;//ok


	constexpr uint64_t unique_id = 0x38;//ok
	constexpr uint64_t mesh_component = 0x430;//ok
	constexpr uint64_t component_to_world = 0x250;//ok
	constexpr uint64_t bone_array = 0x558;//ok
	constexpr uint64_t bone_count = 0x560;//ok


	constexpr uint64_t last_render_time = 0x350;
	constexpr uint64_t last_submit_time = 0x358;

	constexpr uint64_t root_component = 0x230;//ok
	constexpr uint64_t root_position = 0x164;//ok

	constexpr uint64_t damage_handler = 0x9A8;//ok
	constexpr uint64_t health = 0x1B0;//ok
	constexpr uint64_t dormant = 0x100;//ok
	constexpr uint64_t player_state = 0x3F0;//ok
	constexpr uint64_t team_component = 0x5b0;//ok//
	constexpr uint64_t team_id = 0xF8;//ok
	constexpr uint64_t StaticMesh = 0x558; //ok
	constexpr uint64_t StaticMesh_Cached = 0x568;//ok

	constexpr uint64_t Inventory = 0x948;
	constexpr uint64_t CurrentWeapon = 0x218;
	constexpr uint64_t ObjID = 0x18;


	constexpr auto FresnelIntensity = 0x690;
	constexpr auto FresnelOffset = 0x694;
	constexpr auto CachedFresnelColor = 0x680;
	constexpr auto CachedFresnelOffset = 0x684;
	constexpr auto CachedFresnelIntensity = 0x688;
	constexpr auto CachedLocalFresnelOffset = 0x68c;
}

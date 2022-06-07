#pragma once
#include "defs.h"
#include "offset.h"
#include "base.h"
#include <cstdint>
#include <vector>
#include "vector.h"
#define FINLINE __forceinline

using namespace base;
using namespace std;


uintptr_t g_local_player_controller; //here
uintptr_t g_local_player_pawn;
uintptr_t g_local_damage_handler;
uintptr_t g_camera_manager;
uintptr_t root_component_ptr;
uintptr_t g_mesh_ptr;
string g_current_weapon = "Unknown";
string g_current_agent;
Vector3 localrelative_component;
int g_local_team_id;

std::string GetWeaponName(int id)
{
    switch (id)
    {
    default: return std::to_string(id);
        break;
    case 13966286:  return "Knife";
        break;
    case 13812394:  return "Classic";
        break;
    case 13922683:  return "Shorty";
        break;
    case 13916054:  return "Sheriff";
        break;
    case 13896847:  return "Frenzy";
        break;
    case 13910447:  return "Ghost";
        break;
    case 13957590:  return "Stinger";
        break;
    case 13948832:  return "Spectre";
        break;
    case 13890522:  return "Bucky";
        break;
    case 13886286:  return "Judge";
        break;
    case 13870939:  return "Bulldog";
        break;
    case 13935775:  return "Guardian";
        break;
    case 13875630:  return "Phantom";
        break;
    case 13862507:  return "Vandal";
        break;
    case 13943702:  return "Marshal";
        break;
    case 13925412:  return "Operator";
        break;
    case 13858044:  return "Ares";
        break;
    case 13854549:  return "Odin";
        break;
    case 13829231: return "Spike";
        break;
    case 13829254: return "Defuser";
        break;
    case 13815034: return "Orb";
        break;
        //omen
    case 13813295: return "Dark Cover";
        break;
    case 13813623: return "Paranoia";
        break;
    case 13813474: return "Shrouded Step";
        break;
    case 13813772: return "Omen Ult";
        break;
        //PH
    case 13805754: return "Curveball";
        break;
    case 13805958: return "Blaze";
        break;
    case 13805705: return "Hot Hands";
        break;
        //raze
    case 13793764: return "Boom Bot";
        break;
    case 13794022: return "Blast Pack";
        break;
    case 13793580: return "Paint Shells";
        break;
    case 13794191: return "Raze Ult";
        break;
        //Rey
    case 13812513: return "Leer";
        break;
        //sage
    case 13811814: return "Barrier Orb";
        break;
    case 13811659: return "Slow Orb";
        break;
    case 13812049: return "Healing Orb";
        break;
    case 13812160: return "Sage Revive";
        break;
        //sky
    case 13799275: return "Regrowth";
        break;
    case 13799707: return "Trailblazer";
        break;
    case 13799399: return "Guiding Light";
        break;
    case 13800115: return "Skye Ult";
        break;
        //sova
    case 13802236: return "Owl Drone";
        break;
    case 13801728: return "Shock Bolt";
        break;
    case 13802361: return "Recon Bolt";
        break;
    case 13802625: return "Sova Ult";
        break;
        //viper
    case 13804927: return "Snake Bite";
        break;
    case 13804476: return "Poison Cloud";
        break;
    case 13804687: return "Toxic Screen";
        break;
    case 13805079: return "Viper Ult";
        break;
        //yuro
    case 13810567: return "Fakeout";
        break;
    case 13811204: return "Blindside";
        break;
    case 13810847: return "Gatecrash";
        break;
    case 13811308: return "Yuro Ult";
        break;
        //Astra
    case 13807540: return "Astra Fly";
        break;
    case 13806719: return "Nebula";
        break;
    case 13806594: return "Gravity Well";
        break;
    case 13806916: return "Nova Pulse";
        break;
        //Breach
    case 13793008: return "Aftershock";
        break;
    case 13793263: return "Flashpoint";
        break;
    case 13793151: return "Fault Line";
        break;
    case 13793366: return "Breach Ult";
        break;
        //Brim
    case 13808276: return "Stim Beacon";
        break;
    case 13808015: return "Incendiary";
        break;
    case 13807806: return "Sky Smoke";
        break;
    case 13808155: return "Brim Ult";
        break;
        //Chamb
    case 13795661: return "Trademark";
        break;
    case 13796522: return "Headhunter";
        break;
    case 13796066: return "Redezvous";
        break;
    case 13796978: return "TOUR DE FORCE";
        break;
        //Cy
    case 13800592: return "Trapwire";
        break;
    case 13800487: return "Cyber Cage";
        break;
    case 13800972: return "Spycam";
        break;
    case 13800980: return "Spycam (Active)";
        break;
        //Jett
    case 13814151: return "Cloudburst";
        break;
    case 13814410: return "Updraft";
        break;
    case 13814448: return "Jett Ult";
        break;
        //ko
    case 13798587: return "Fragment";
        break;
    case 13798191: return "Flashdrive";
        break;
    case 13798339: return "Zeropoint";
        break;
    case 13798733: return "KayO Ult";
        break;
        //KJ
    case 13803148: return "Nanoswarm";
        break;
    case 13803760: return "Alarmbot";
        break;
    case 13803353: return "Turret";
        break;
    case 13804028: return "KJ Ult";
        break;
        //neon
    case 13808732: return "Fast Lane";
        break;
    case 13809042: return "Relay Bolt";
        break;
    case 13808887: return "High Gear";
        break;
    case 13809375: return "Neon Ult";
        break;
        //fade
    case 13791456: return "PROWLER";
        break;
    case 13792236: return "SEIZE";
        break;
    case 13791946: return "HAUNT";
        break;
    case 13792601: return "FADE ULT";
        break;

    case 0: return "AFK";
        break;
    }
}

 std::string GetCharacterName(int id)
 {

     switch (id)
     {
     case 13806385: return "ASTRA";//okkkkkkkk
         break;
     case 13814078: return "JETT";//okkkkkkkk
         break;
     case 13795547: return "CHAMBER";//okkkkkkk
         break;
     case 13802992: return "KILLJOY";//okKKKKKKKK
         break;
     case 13793508: return "RAZE";//okkkkkkkkk
         break;
     case 13812452: return "REYNA";//okkkkkkkkk
         break;
     case 13811595: return "SAGE";//okkkkkkkkk
         break;
     case 13799217: return "SKYE";//okkkkkkkkk
         break;
     case 13808666: return "NEON";//okkkkkkkkk
         break;
     case 13804307: return "VIPER";//okkkkkkkkk
         break;
     case 13792933: return "BREACH";//okkkkkkkkkk
         break;
     case 13807748: return "BRIMSTONE";//okkkkkkkkk
         break;
     case 13800426: return "CYPHER";//okkkkkkkkk
         break;
     case 13813243: return "OMEN";//okkkkkkkkk
         break;
     case 13805415: return "PHOENIX";//okkkkkkkkkkk
         break;
     case 13801638: return "SOVA";//okkkkkkkkkkk
         break;
     case 13810514: return "YORU";//okkkkkkkkk
         break;
     case 13798123: return "KAY/O";//okkkkkkkkkk// 
         break;
     case 13734084+78321: return "BOT";//okkkkkkkk//
         break;
     case 13791356: return "Fade";//okkkkkkkkkkkkk
         break;
     default:
         return std::to_string(id);
         break;
     }
 }

template <typename T>  T read(uintptr_t pid, uintptr_t address) {
    return driver::read<T>(pid, address);
}
template <typename T>  void write(uintptr_t pid, uintptr_t address, T& buffer) {
    return driver::write<T>(pid, address, buffer);
}

class Enemy
{
public:
    FINLINE bool IsValidPlayer()
    {
        uintptr_t unique_id = read<uintptr_t>(g_pid, actor_ptr + offset::unique_id);
        if (unique_id != 18743553)
            return false;

        return true;
    }

    FINLINE bool RecentlyRendered() {
        float fLastSubmitTime = read<float>(g_pid, mesh_ptr + offset::last_render_time);
        float fLastRenderTimeOnScreen = read<float>(g_pid, mesh_ptr + offset::last_submit_time);
        const float fVisionTick = 5.f;
        return fLastRenderTimeOnScreen + fVisionTick >= fLastSubmitTime;

    }

    bool IsVisible()
    {

        if (!RecentlyRendered())
            return false;
        return RecentlyRendered();
    }

    FINLINE bool IsAlive()
    {
        float health = read<float>(g_pid, damage_handler_ptr + offset::health);
        return (health > 0 && health < 200);
    }

    FINLINE string GetCurrentWeapon()
    {
        auto Inventory = read<intptr_t>(g_pid, actor_ptr + offset::Inventory);
        intptr_t CurrentEquip = read<intptr_t>(g_pid, Inventory + offset::CurrentWeapon);
        int weaponObj = read<int>(g_pid, CurrentEquip + offset::ObjID);
        return GetWeaponName(weaponObj);
    }

    FINLINE string GetCharacter()
    {
        int charObj = read<int>(g_pid, actor_ptr + offset::ObjID);
        auto characterName = GetCharacterName(charObj);
        return characterName;
    }


    FINLINE bool IsDormant()
    {
        bool dormant = read<bool>(g_pid, actor_ptr + offset::dormant);
        if (!dormant)
        {
            return false;
        }
        return true;
    }



    uintptr_t actor_ptr;
    uintptr_t damage_handler_ptr;
    uintptr_t player_state_ptr;
    uintptr_t root_component_ptr;
    uintptr_t mesh_ptr;
    uintptr_t bone_array_ptr;
    int bone_count;
    bool s_visible;
    int team_id;
    int object_id;
    int actor_type;

};
inline bool operator==(const Enemy& a, const Enemy& b) // Enemy-Operator
{
    if (a.actor_ptr == b.actor_ptr)
    {
        if (a.mesh_ptr == b.mesh_ptr)
            return true;
    }
    return false;
}

ImVec2 head_at_screen;

class CameraStruct
{
public:
    Vector3 Position; //0x11B0 
    Vector3 Rotation; //0x11BC 
    float Fov; //0x11C8 
};
CameraStruct GetCameraCache()
{
    auto camera_position = read<CameraStruct>(g_pid, g_camera_manager + offset::camera_position);
    return camera_position;
}

bool g_esp_enabled{ true };
bool g_esp_dormantcheck{ true };
bool g_headesp{ false };
bool g_boneesp{ false };
bool g_boxesp{ true };
bool g_lines{ true };
bool g_bar{ true };
bool g_agentname{ true };
bool g_crosshair{ false };

float font_size = 15;
float crosshair = 15;

uintptr_t unique_id;
vector<Enemy> enemy_collection{};
ImU32 g_esp_color = ImGui::ColorConvertFloat4ToU32(ImVec4(1, 0, 0.4F, 1));
ImU32 g_color_white = ImGui::ColorConvertFloat4ToU32(ImVec4(1, 1, 1, 1));
HANDLE handleOffset;

fTransform GetBoneIndex(DWORD_PTR mesh, int index)
{
    DWORD_PTR bonearray = read<DWORD_PTR>(g_pid, mesh + 0x558);// 5A0 / 590
    if (!bonearray || bonearray == NULL)
        bonearray = read<DWORD_PTR>(g_pid, mesh + 0x568);
    return read<fTransform>(g_pid, bonearray + (index * 0x30));
}
Vector3 GetBoneWithRotation(DWORD_PTR mesh, int id)
{
    fTransform Bone = GetBoneIndex(mesh, id);
    fTransform Component2World = read<fTransform>(g_pid, mesh + offset::component_to_world);
    FM Matrix = Bone.tomat() * Component2World.tomat();
    return Vector3{ Matrix.WPlane.x, Matrix.WPlane.y, Matrix.WPlane.z };
}
Vector3 getBonePosition(Enemy enemy, int index)
{
    size_t size = sizeof(FTransform);
    FTransform firstBone = read<FTransform>(g_pid, enemy.bone_array_ptr + (size * index));
    FTransform componentToWorld = read<FTransform>(g_pid, enemy.mesh_ptr + offset::component_to_world);
    D3DMATRIX matrix = MatrixMultiplication(firstBone.ToMatrixWithScale(), componentToWorld.ToMatrixWithScale());
    return Vector3(matrix._41, matrix._42, matrix._43);
}


     typedef struct
     {
         DWORD R;
         DWORD G;
         DWORD B;
         DWORD A;
     }RGBA;

     class Color
     {
     public:
         RGBA red = { 255,0,0,255 };
         RGBA Magenta = { 255,0,255,255 };
         RGBA yellow = { 255,255,0,255 };
         RGBA grayblue = { 128,128,255,255 };
         RGBA green = { 128,224,0,255 };
         RGBA darkgreen = { 0,224,128,255 };
         RGBA brown = { 192,96,0,255 };
         RGBA pink = { 255,168,255,255 };
         RGBA DarkYellow = { 216,216,0,255 };
         RGBA SilverWhite = { 236,236,236,255 };
         RGBA purple = { 144,0,255,255 };
         RGBA Navy = { 88,48,224,255 };
         RGBA skyblue = { 0,136,255,255 };
         RGBA graygreen = { 128,160,128,255 };
         RGBA blue = { 0,96,192,255 };
         RGBA orange = { 255,128,0,255 };
         RGBA peachred = { 255,80,128,255 };
         RGBA reds = { 255,128,192,255 };
         RGBA darkgray = { 96,96,96,255 };
         RGBA Navys = { 0,0,128,255 };
         RGBA darkgreens = { 0,128,0,255 };
         RGBA darkblue = { 0,128,128,255 };
         RGBA redbrown = { 128,0,0,255 };
         RGBA purplered = { 128,0,128,255 };
         RGBA greens = { 0,255,0,255 };
         RGBA envy = { 0,255,255,255 };
         RGBA black = { 0,0,0,255 };
         RGBA gray = { 128,128,128,255 };
         RGBA white = { 255,255,255,255 };
         RGBA blues = { 30,144,255,255 };
         RGBA lightblue = { 135,206,250,160 };
         RGBA Scarlet = { 220, 20, 60, 160 };
         RGBA white_ = { 255,255,255,200 };
         RGBA gray_ = { 128,128,128,200 };
         RGBA black_ = { 0,0,0,200 };
         RGBA red_ = { 255,0,0,200 };
         RGBA Magenta_ = { 255,0,255,200 };
         RGBA yellow_ = { 255,255,0,200 };
         RGBA grayblue_ = { 128,128,255,200 };
         RGBA green_ = { 128,224,0,200 };
         RGBA darkgreen_ = { 0,224,128,200 };
         RGBA brown_ = { 192,96,0,200 };
         RGBA pink_ = { 255,168,255,200 };
         RGBA darkyellow_ = { 216,216,0,200 };
         RGBA silverwhite_ = { 236,236,236,200 };
         RGBA purple_ = { 144,0,255,200 };
         RGBA Blue_ = { 88,48,224,200 };
         RGBA skyblue_ = { 0,136,255,200 };
         RGBA graygreen_ = { 128,160,128,200 };
         RGBA blue_ = { 0,96,192,200 };
         RGBA orange_ = { 255,128,0,200 };
         RGBA pinks_ = { 255,80,128,200 };
         RGBA Fuhong_ = { 255,128,192,200 };
         RGBA darkgray_ = { 96,96,96,200 };
         RGBA Navy_ = { 0,0,128,200 };
         RGBA darkgreens_ = { 0,128,0,200 };
         RGBA darkblue_ = { 0,128,128,200 };
         RGBA redbrown_ = { 128,0,0,200 };
         RGBA purplered_ = { 128,0,128,200 };
         RGBA greens_ = { 0,255,0,200 };
         RGBA envy_ = { 0,255,255,200 };

         RGBA glassblack = { 0, 0, 0, 160 };
         RGBA GlassBlue = { 65,105,225,80 };
         RGBA glassyellow = { 255,255,0,160 };
         RGBA glass = { 200,200,200,60 };


         RGBA Plum = { 221,160,221,160 };

     };
     Color Col;

     int Colors;
     const char* CCCs[]
     {
         "White",
         "SilverWhite",
         "Red",
         "Blue",
         "Cyan",
         "Green",
         "Yellow",
         "Black",
     };
     RGBA CCC;

    void renderBoneLine(Vector3 first_bone_position, Vector3 second_bone_position, Vector3 position, Vector3 rotation, float fov, RGBA* color)
    {
        Vector3 first_bone_screen_position = worldToScreen(first_bone_position, position, rotation, fov);
        ImVec2 fist_screen_position = ImVec2(first_bone_screen_position.x, first_bone_screen_position.y);
        Vector3 second_bone_screen_position = worldToScreen(second_bone_position, position, rotation, fov);
        ImVec2 second_screen_position = ImVec2(second_bone_screen_position.x, second_bone_screen_position.y);
        ImGui::GetOverlayDrawList()->AddLine(fist_screen_position, second_screen_position, ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)));
    }

    void renderBox(Vector3 head_at_screen, Vector3 foot_at_screen, float distance_modifier, RGBA* color)
    {
        Vector3 Box = head_at_screen - foot_at_screen;

        if (Box.y < 0)
            Box.y *= -1;

        int BoxWidth = (int)Box.y / 2.4f;
        int DrawX = (int)head_at_screen.x - (BoxWidth / 2);
        int DrawY = (int)head_at_screen.y;


        int head_x = head_at_screen.x;
        int head_y = head_at_screen.y;
        int foot_x = foot_at_screen.x;
        int foot_y = foot_at_screen.y;
        int start_x = head_x - foot_x / distance_modifier;
        int start_y = head_y - foot_y / distance_modifier;
        int end_x = head_x + foot_x / distance_modifier;
        int end_y = head_y + foot_y / distance_modifier;
        ImGui::GetOverlayDrawList()->AddRect(ImVec2(start_x, start_y), ImVec2(end_x, end_y), ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), 0, 0);
    
    }


    std::wstring MBytesToWString(const char* lpcszString)
    {
        int len = strlen(lpcszString);
        int unicodeLen = ::MultiByteToWideChar(CP_ACP, 0, lpcszString, -1, NULL, 0);
        wchar_t* pUnicode = new wchar_t[unicodeLen + 1];
        memset(pUnicode, 0, (unicodeLen + 1) * sizeof(wchar_t));
        ::MultiByteToWideChar(CP_ACP, 0, lpcszString, -1, (LPWSTR)pUnicode, unicodeLen);
        std::wstring wString = (wchar_t*)pUnicode;
        delete[] pUnicode;
        return wString;
    }

    std::string WStringToUTF8(const wchar_t* lpwcszWString)
    {
        char* pElementText;
        int iTextLen = ::WideCharToMultiByte(CP_UTF8, 0, (LPWSTR)lpwcszWString, -1, NULL, 0, NULL, NULL);
        pElementText = new char[iTextLen + 1];
        memset((void*)pElementText, 0, (iTextLen + 1) * sizeof(char));
        ::WideCharToMultiByte(CP_UTF8, 0, (LPWSTR)lpwcszWString, -1, pElementText, iTextLen, NULL, NULL);
        std::string strReturn(pElementText);
        delete[] pElementText;
        return strReturn;
    }

    void DrawString(float fontSize, int x, int y, RGBA* color, bool bCenter, bool stroke, const char* pText, ...)
    {
        va_list va_alist;
        char buf[1024] = { 0 };
        va_start(va_alist, pText);
        _vsnprintf_s(buf, sizeof(buf), pText, va_alist);
        va_end(va_alist);
        std::string text = WStringToUTF8(MBytesToWString(buf).c_str());
        if (bCenter)
        {
            ImVec2 textSize = ImGui::CalcTextSize(text.c_str());
            x = x - textSize.x / 2;
            y = y - textSize.y;
        }
        if (stroke)
        {
            ImGui::GetOverlayDrawList()->AddText(ImGui::GetFont(), fontSize, ImVec2(x + 1, y + 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0, 0, 0, 1)), text.c_str());
            ImGui::GetOverlayDrawList()->AddText(ImGui::GetFont(), fontSize, ImVec2(x - 1, y - 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0, 0, 0, 1)), text.c_str());
            ImGui::GetOverlayDrawList()->AddText(ImGui::GetFont(), fontSize, ImVec2(x + 1, y - 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0, 0, 0, 1)), text.c_str());
            ImGui::GetOverlayDrawList()->AddText(ImGui::GetFont(), fontSize, ImVec2(x - 1, y + 1), ImGui::ColorConvertFloat4ToU32(ImVec4(0, 0, 0, 1)), text.c_str());
        }
        ImGui::GetOverlayDrawList()->AddText(ImGui::GetFont(), fontSize, ImVec2(x, y), ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), text.c_str());
    }



    void renderBones(Enemy enemy, Vector3 position, Vector3 rotation, float fov)
    {
        Vector3 head_position = GetBoneWithRotation(enemy.mesh_ptr, 8);
        Vector3 neck_position;
        Vector3 chest_position = GetBoneWithRotation(enemy.mesh_ptr, 6);
        Vector3 l_upper_arm_position;
        Vector3 l_fore_arm_position;
        Vector3 l_hand_position;
        Vector3 r_upper_arm_position;
        Vector3 r_fore_arm_position;
        Vector3 r_hand_position;
        Vector3 stomach_position = GetBoneWithRotation(enemy.mesh_ptr, 4);
        Vector3 pelvis_position = GetBoneWithRotation(enemy.mesh_ptr, 3);
        Vector3 l_thigh_position;
        Vector3 l_knee_position;
        Vector3 l_foot_position;
        Vector3 r_thigh_position;
        Vector3 r_knee_position;
        Vector3 r_foot_position;
        if (enemy.bone_count >= 90 && enemy.bone_count <= 105) { // MALE
            neck_position = GetBoneWithRotation(enemy.mesh_ptr, 19);

            l_upper_arm_position = GetBoneWithRotation(enemy.mesh_ptr, 21);
            l_fore_arm_position = GetBoneWithRotation(enemy.mesh_ptr, 22);
            l_hand_position = GetBoneWithRotation(enemy.mesh_ptr, 23);

            r_upper_arm_position = GetBoneWithRotation(enemy.mesh_ptr, 47);
            r_fore_arm_position = GetBoneWithRotation(enemy.mesh_ptr, 48);
            r_hand_position = GetBoneWithRotation(enemy.mesh_ptr, 49);

            l_thigh_position = GetBoneWithRotation(enemy.mesh_ptr, 75);
            l_knee_position = GetBoneWithRotation(enemy.mesh_ptr, 76);
            l_foot_position = GetBoneWithRotation(enemy.mesh_ptr, 78);

            r_thigh_position = GetBoneWithRotation(enemy.mesh_ptr, 82);
            r_knee_position = GetBoneWithRotation(enemy.mesh_ptr, 83);
            r_foot_position = GetBoneWithRotation(enemy.mesh_ptr, 85);
        }
        else if (enemy.bone_count >= 90 && enemy.bone_count <= 105) { // FEMALE
            neck_position = GetBoneWithRotation(enemy.mesh_ptr, 19);

            l_upper_arm_position = GetBoneWithRotation(enemy.mesh_ptr, 21);
            l_fore_arm_position = GetBoneWithRotation(enemy.mesh_ptr, 40);
            l_hand_position = GetBoneWithRotation(enemy.mesh_ptr, 42);

            r_upper_arm_position = GetBoneWithRotation(enemy.mesh_ptr, 46);
            r_fore_arm_position = GetBoneWithRotation(enemy.mesh_ptr, 65);
            r_hand_position = GetBoneWithRotation(enemy.mesh_ptr, 67);

            l_thigh_position = GetBoneWithRotation(enemy.mesh_ptr, 78);
            l_knee_position = GetBoneWithRotation(enemy.mesh_ptr, 75);
            l_foot_position = GetBoneWithRotation(enemy.mesh_ptr, 77);

            r_thigh_position = GetBoneWithRotation(enemy.mesh_ptr, 80);
            r_knee_position = GetBoneWithRotation(enemy.mesh_ptr, 82);
            r_foot_position = GetBoneWithRotation(enemy.mesh_ptr, 84);
        }
        else if (enemy.bone_count == 103) { // BOT
            neck_position = GetBoneWithRotation(enemy.mesh_ptr, 9);

            l_upper_arm_position = GetBoneWithRotation(enemy.mesh_ptr, 33);
            l_fore_arm_position = GetBoneWithRotation(enemy.mesh_ptr, 30);
            l_hand_position = GetBoneWithRotation(enemy.mesh_ptr, 32);

            r_upper_arm_position = GetBoneWithRotation(enemy.mesh_ptr, 58);
            r_fore_arm_position = GetBoneWithRotation(enemy.mesh_ptr, 55);
            r_hand_position = GetBoneWithRotation(enemy.mesh_ptr, 57);

            l_thigh_position = GetBoneWithRotation(enemy.mesh_ptr, 63);
            l_knee_position = GetBoneWithRotation(enemy.mesh_ptr, 65);
            l_foot_position = GetBoneWithRotation(enemy.mesh_ptr, 69);

            r_thigh_position = GetBoneWithRotation(enemy.mesh_ptr, 77);
            r_knee_position = GetBoneWithRotation(enemy.mesh_ptr, 79);
            r_foot_position = GetBoneWithRotation(enemy.mesh_ptr, 83);
        }
        else {
            return;
        }

        if (enemy.IsVisible())
        {
            renderBoneLine(head_position, neck_position, position, rotation, fov, &Col.greens_);
            renderBoneLine(neck_position, chest_position, position, rotation, fov, &Col.greens_);
            renderBoneLine(neck_position, l_upper_arm_position, position, rotation, fov, &Col.greens_);
            renderBoneLine(l_upper_arm_position, l_fore_arm_position, position, rotation, fov, &Col.greens_);
            renderBoneLine(l_fore_arm_position, l_hand_position, position, rotation, fov, &Col.greens_);
            renderBoneLine(neck_position, r_upper_arm_position, position, rotation, fov, &Col.greens_);
            renderBoneLine(r_upper_arm_position, r_fore_arm_position, position, rotation, fov, &Col.greens_);
            renderBoneLine(r_fore_arm_position, r_hand_position, position, rotation, fov, &Col.greens_);
            renderBoneLine(chest_position, stomach_position, position, rotation, fov, &Col.greens_);
            renderBoneLine(stomach_position, pelvis_position, position, rotation, fov, &Col.greens_);
            renderBoneLine(pelvis_position, l_thigh_position, position, rotation, fov, &Col.greens_);
            renderBoneLine(l_thigh_position, l_knee_position, position, rotation, fov, &Col.greens_);
            renderBoneLine(l_knee_position, l_foot_position, position, rotation, fov, &Col.greens_);
            renderBoneLine(pelvis_position, r_thigh_position, position, rotation, fov, &Col.greens_);
            renderBoneLine(r_thigh_position, r_knee_position, position, rotation, fov, &Col.greens_);
            renderBoneLine(r_knee_position, r_foot_position, position, rotation, fov, &Col.greens_);
        }
        else
        {
            renderBoneLine(head_position, neck_position, position, rotation, fov, &Col.red);
            renderBoneLine(neck_position, chest_position, position, rotation, fov, &Col.red);
            renderBoneLine(neck_position, l_upper_arm_position, position, rotation, fov, &Col.red);
            renderBoneLine(l_upper_arm_position, l_fore_arm_position, position, rotation, fov, &Col.red);
            renderBoneLine(l_fore_arm_position, l_hand_position, position, rotation, fov, &Col.red);
            renderBoneLine(neck_position, r_upper_arm_position, position, rotation, fov, &Col.red);
            renderBoneLine(r_upper_arm_position, r_fore_arm_position, position, rotation, fov, &Col.red);
            renderBoneLine(r_fore_arm_position, r_hand_position, position, rotation, fov, &Col.red);
            renderBoneLine(chest_position, stomach_position, position, rotation, fov, &Col.red);
            renderBoneLine(stomach_position, pelvis_position, position, rotation, fov, &Col.red);
            renderBoneLine(pelvis_position, l_thigh_position, position, rotation, fov, &Col.red);
            renderBoneLine(l_thigh_position, l_knee_position, position, rotation, fov, &Col.red);
            renderBoneLine(l_knee_position, l_foot_position, position, rotation, fov, &Col.red);
            renderBoneLine(pelvis_position, r_thigh_position, position, rotation, fov, &Col.red);
            renderBoneLine(r_thigh_position, r_knee_position, position, rotation, fov, &Col.red);
            renderBoneLine(r_knee_position, r_foot_position, position, rotation, fov, &Col.red);
        }
    }

    void DrawFilledRect(int x, int y, int w, int h, RGBA* color)
    {
        ImGui::GetForegroundDrawList()->AddRectFilled(ImVec2(x, y), ImVec2(x + w, y + h), ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), 0, 0);
    }

    void DrawLeftProgressBar(int x, int y, int w, int h, int thick, int m_health)
    {
        int G = (255 * m_health / 100);
        int R = 255 - G;
        RGBA healthcol = { R, G, 0, 255 };

        DrawFilledRect(x - (w / 2) - 3, y, thick, (h)*m_health / 100, &healthcol);
    }

    void DrawNormalBox(int x, int y, int w, int h, int borderPx, RGBA* color)
    {
        DrawFilledRect(x + borderPx, y, w, borderPx, color); //top 
        DrawFilledRect(x + w - w + borderPx, y, w, borderPx, color); //top 
        DrawFilledRect(x, y, borderPx, h, color); //left 
        DrawFilledRect(x, y + h - h + borderPx * 2, borderPx, h, color); //left 
        DrawFilledRect(x + borderPx, y + h + borderPx, w, borderPx, color); //bottom 
        DrawFilledRect(x + w - w + borderPx, y + h + borderPx, w, borderPx, color); //bottom 
        DrawFilledRect(x + w + borderPx, y, borderPx, h, color);//right 
        DrawFilledRect(x + w + borderPx, y + h - h + borderPx * 2, borderPx, h, color);//right 
    }

    void DrawCornerBox(int x, int y, int w, int h, int borderPx, RGBA* color)
    {
        DrawFilledRect(x + borderPx, y, w / 3, borderPx, color); //top 
        DrawFilledRect(x + w - w / 3 + borderPx, y, w / 3, borderPx, color); //top 
        DrawFilledRect(x, y, borderPx, h / 3, color); //left 
        DrawFilledRect(x, y + h - h / 3 + borderPx * 2, borderPx, h / 3, color); //left 
        DrawFilledRect(x + borderPx, y + h + borderPx, w / 3, borderPx, color); //bottom 
        DrawFilledRect(x + w - w / 3 + borderPx, y + h + borderPx, w / 3, borderPx, color); //bottom 
        DrawFilledRect(x + w + borderPx, y, borderPx, h / 3, color);//right 
        DrawFilledRect(x + w + borderPx, y + h - h / 3 + borderPx * 2, borderPx, h / 3, color);//right 
    }

    void DrawFilledCircle(int x, int y, int radius, RGBA* color, int segments)
    {
        ImGui::GetOverlayDrawList()->AddCircleFilled(ImVec2(x, y), radius, ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), segments);
    }
    void DrawCircle(int x, int y, int radius, RGBA* color, int segments)
    {
        ImGui::GetOverlayDrawList()->AddCircle(ImVec2(x, y), radius, ImGui::ColorConvertFloat4ToU32(ImVec4(color->R / 255.0, color->G / 255.0, color->B / 255.0, color->A / 255.0)), segments);
    }

    void renderEsp()
    {
        if (Colors == 0)
        {
            CCC = Col.white;
        }
        else if (Colors == 1)
        {
            CCC = Col.SilverWhite;
        }
        else if (Colors == 2)
        {
            CCC = Col.red;
        }
        else if (Colors == 3)
        {
            CCC = Col.blue;
        }
        else if (Colors == 4)
        {
            CCC = Col.skyblue;
        }
        else if (Colors == 5)
        {
            CCC = Col.green;
        }
        else if (Colors == 6)
        {
            CCC = Col.yellow;
        }
        else if (Colors == 7)
        {
            CCC = Col.black;
        }


        auto Inventory = read<intptr_t>(g_pid, g_local_player_pawn + offset::Inventory);
        if (Inventory)
        {
            char dist_[64];
            sprintf_s(dist_,("  %s   :)"), g_current_weapon);
            DrawString(20, 50, 50, &Col.white_, true, true,dist_);
        }
        std::vector<Enemy> local_enemy_collection = enemy_collection;
        if (local_enemy_collection.empty()) {
            return;
        }

        if (g_crosshair) {

            DrawCircle(g_width / 2, g_height / 2, crosshair, &CCC, 30);

            //ImGui::GetOverlayDrawList()->AddCircle(ImVec2(g_width / 2, g_height / 2), crosshair, CCC, 32, 1.0f);
        }
        Vector3 camera_position = read<Vector3>(g_pid, g_camera_manager + offset::camera_position);
        Vector3 camera_rotation = read<Vector3>(g_pid, g_camera_manager + offset::camera_rotation);
        float camera_fov = read<float>(g_pid, g_camera_manager + offset::camera_fov);

        for (int i = 0; i < local_enemy_collection.size(); i++) {
            Enemy enemy = local_enemy_collection[i];
            float health = read<float>(g_pid, enemy.damage_handler_ptr + offset::health);
            if (enemy.actor_ptr == g_local_player_pawn || health <= 0 || !enemy.mesh_ptr) {
                continue;
            }

            Vector3 head_position = GetBoneWithRotation(enemy.mesh_ptr, 8); // 8 = head bone

            Vector3 foot_position = GetBoneWithRotation(enemy.mesh_ptr, 0); // 8 = head bone


            Vector3 head_at_screen_vec = worldToScreen(head_position, GetCameraCache().Position, GetCameraCache().Rotation, camera_fov);
            ImVec2 head_at_screen = ImVec2(head_at_screen_vec.x, head_at_screen_vec.y);
            float distance_modifier = GetCameraCache().Position.Distance(head_position) * 0.001F;
            Vector3 vFoot = worldToScreen(foot_position, GetCameraCache().Position, GetCameraCache().Rotation, camera_fov);

            uint64_t rootcomponent = read<uint64_t>(g_pid, enemy.actor_ptr + offset::root_component);
            Vector3 relativelocation = read<Vector3>(g_pid, rootcomponent + offset::root_position);
            Vector3 X = worldToScreen(relativelocation, GetCameraCache().Position, GetCameraCache().Rotation, GetCameraCache().Fov);


            float BoxHeight = abs(head_at_screen_vec.y - vFoot.y);
            float BoxWidth = BoxHeight / 2.4f;


            if (g_esp_dormantcheck) {
                float last_render_time = read<float>(g_pid, enemy.mesh_ptr + offset::last_render_time);
                float last_submit_time = read<float>(g_pid, enemy.mesh_ptr + offset::last_submit_time);
                bool is_visible = last_render_time + 0.06F >= last_submit_time;
                bool dormant = read<bool>(g_pid, enemy.actor_ptr + offset::dormant);
                if (!dormant || !is_visible) {
                    continue;
                }
            }
            if (g_agentname)
            {
                char dist[64];
                sprintf_s(dist, ("%s"), enemy.GetCharacter());
                DrawString(font_size, head_at_screen_vec.x, head_at_screen_vec.y - 5, &Col.white_, true, true, dist);

            }
            if (g_boneesp) {
                renderBones(enemy, GetCameraCache().Position, GetCameraCache().Rotation, camera_fov);
            }
            if (g_headesp) {
                //ImGui::GetOverlayDrawList()->AddCircle(head_at_screen, 7 / distance_modifier, g_esp_color, 0, 3);
                DrawFilledCircle(head_at_screen.x, head_at_screen.y, 7 / distance_modifier, &CCC, 0);

            }
            if (g_boxesp) {
                //DrawNormalBox(vFoot.x - (BoxWidth / 2), head_at_screen_vec.y, BoxWidth, BoxHeight, 1, &Col.white);
                DrawCornerBox(vFoot.x - (BoxWidth / 2), head_at_screen_vec.y, BoxWidth, BoxHeight, 1, &Col.white);
            }

            if (g_lines) {
                ImGui::GetOverlayDrawList()->AddLine(ImVec2(g_width / 2, g_height / 256), ImVec2(head_at_screen.x, head_at_screen.y), g_color_white, 1);

            }
            if (g_bar) // Healthbar
            {
                DrawLeftProgressBar(X.x, head_at_screen_vec.y, BoxWidth, BoxHeight, 4, health);
                //char vida[100];
                //sprintf_s(vida, "H:%2.f", health);
                //DrawString(12, X.x, X.y + 5, &Col.white, true, true, vida);
            }


        }
    }

    void handleOtherKeyPresses()
    {

        if (GetAsyncKeyState(VK_INSERT) & 1) {
            g_overlay_visible = !g_overlay_visible;
            glfwSetWindowAttrib(g_window, GLFW_MOUSE_PASSTHROUGH, !g_overlay_visible);
            if (g_overlay_visible) {
                SetForegroundWindow(getOverlayWindow());
            }
            else {
                showValorantWindow();
            }
        }

    }


    void runRenderTick()
    {
        overlayStart();

        if (g_esp_enabled) {
            renderEsp();
        }


        if (g_overlay_visible) {
            {
                ImGui::Begin("Visuals", nullptr, ImGuiWindowFlags_NoResize);
                ImGui::SetWindowSize("Visuals", ImVec2(200, 176));
                ImGui::Checkbox("ESP", &g_esp_enabled);
                ImGui::Checkbox("ESP Dormant Check", &g_esp_dormantcheck);
                ImGui::Checkbox("Head ESP", &g_headesp);
                ImGui::Checkbox("Bone ESP", &g_boneesp);
                ImGui::Checkbox("Box ESP", &g_boxesp);
                ImGui::Checkbox("Snaplines", &g_lines);
                ImGui::Checkbox("Agent ESP", &g_agentname);
                ImGui::Checkbox("Crosshair", &g_crosshair);
                ImGui::SliderFloat("font size", &font_size, 1.f, 360.f, "%.1f");
                ImGui::SliderFloat("coos_size", &crosshair, 1.f, 360.f, "%.1f");
                ImGui::Combo("Aim Keys", &Colors, CCCs, sizeof(CCCs) / sizeof(*CCCs));

                ImGui::End();
            }
        }

        overlayEnd();
    }

    std::vector<Enemy> getValidEnemies(uintptr_t actor_array, int actor_count)
    {
        std::vector<Enemy> temp_enemy_collection{};
        size_t size = sizeof(uintptr_t);

        for (int i = 0; i < actor_count; i++) {

            uintptr_t actor = read<uintptr_t>(g_pid, actor_array + (i * size));
            if (actor == 0x00) {
                continue;
            }
            uintptr_t unique_id = read<uintptr_t>(g_pid, actor + offset::unique_id);
            if (unique_id != 18743553) {
                continue;
            }
            uintptr_t mesh = read<uintptr_t>(g_pid, actor + offset::mesh_component);
            if (!mesh) {
                continue;
            }

            uintptr_t player_state = read<uintptr_t>(g_pid, actor + offset::player_state);
            uintptr_t team_component = read<uintptr_t>(g_pid, player_state + offset::team_component);
            int team_id = read<int>(g_pid, team_component + offset::team_id);
            int bone_count = read<int>(g_pid, mesh + offset::bone_count);
            bool is_bot = bone_count == 103;
            if (team_id == g_local_team_id && !is_bot) {
                continue;
            }

            uintptr_t damage_handler = read<uintptr_t>(g_pid, actor + offset::damage_handler);
            uintptr_t root_component = read<uintptr_t>(g_pid, actor + offset::root_component);
            uintptr_t bone_array = read<uintptr_t>(g_pid, mesh + offset::bone_array);

            Enemy enemy{
                actor,
                damage_handler,
                player_state,
                root_component,
                mesh,
                bone_array,
                bone_count,
                true
            };

            temp_enemy_collection.push_back(enemy);
        }

        return temp_enemy_collection;
    }

    uintptr_t decryptWorld(uintptr_t pid, uintptr_t base_address)
    {
        const auto key = read<uintptr_t>(pid, base_address + offset::uworld_key);
       //print("key", (void*)key);
        const auto state = read<State>(pid, base_address + offset::uworld_state);
        //print("state.keys", (void*)state.keys);
        const auto uworld_ptr = decrypt_uworld(key, (uintptr_t*)&state);
        //print("uworld_ptr", (void*)uworld_ptr);
        return read<uintptr_t>(pid, uworld_ptr);
    }

    void getOffset(LPVOID lpParameter)
    {
        vector<Enemy> local_enemy_collection;

        while (true) {
            uintptr_t world = decryptWorld(g_pid, g_base_address);
            ////print("world", (void*)world);
            uintptr_t game_instance = read<uintptr_t>(g_pid, world + offset::game_instance);
            ////print("game_instance", (void*)game_instance);
            uintptr_t persistent_level = read<uintptr_t>(g_pid, world + offset::persistent_level);
            ////print("persistent_level", (void*)persistent_level);
            uintptr_t local_player_array = read<uintptr_t>(g_pid, game_instance + offset::local_player_array);
            //print("local_player_array", (void*)local_player_array);
            uintptr_t local_player = read<uintptr_t>(g_pid, local_player_array);
            //print("local_player", (void*)local_player);
            uintptr_t local_player_controller = read<uintptr_t>(g_pid, local_player + offset::local_player_controller);
            //print("local_player_controller", (void*)local_player_controller);
            uintptr_t local_player_pawn = read<uintptr_t>(g_pid, local_player_controller + offset::local_player_pawn);
            //print("local_player_pawn", (void*)local_player_pawn);
            uintptr_t local_damage_handler = read<uintptr_t>(g_pid, local_player_pawn + offset::damage_handler);
            //print("local_damage_handler", (void*)local_damage_handler);
            uintptr_t local_player_state = read<uintptr_t>(g_pid, local_player_pawn + offset::player_state);
            //print("local_player_state", (void*)local_player_state);
            uintptr_t local_team_component = read<uintptr_t>(g_pid, local_player_state + offset::team_component);
            //print("local_team_component", (void*)local_team_component);
            uintptr_t camera_manager = read<uintptr_t>(g_pid, local_player_controller + offset::camera_manager);
            //print("camera_manager", (void*)camera_manager);
            uintptr_t actor_array = read<uintptr_t>(g_pid, persistent_level + offset::actor_array);
            //print("actor_array", (void*)actor_array);
            uintptr_t localroot_component = read<uint64_t>(g_pid, local_player_pawn + offset::root_component);

            localrelative_component = read<Vector3>(g_pid, localroot_component + offset::root_position);

            int local_team_id = read<int>(g_pid, local_team_component + offset::team_id);

            int actor_count = read<int>(g_pid, persistent_level + offset::actor_count);
            g_local_player_controller = local_player_controller;
            g_local_player_pawn = local_player_pawn;
            g_local_damage_handler = local_damage_handler;
            g_camera_manager = camera_manager;
            g_local_team_id = local_team_id;
            enemy_collection = getValidEnemies(actor_array, actor_count);

            Sleep(2500);

            if (local_player_pawn)
            {
                auto Inventory = read<intptr_t>(g_pid, local_player_pawn + offset::Inventory);
                if (Inventory)
                {
                    intptr_t CurrentEquip = read<intptr_t>(g_pid, Inventory + offset::CurrentWeapon);
                    if (CurrentEquip)
                    {
                        int objID = read<int>(g_pid, CurrentEquip + offset::ObjID);
                        g_current_weapon = GetWeaponName(objID);
                    }
                    else
                    {
                        g_current_weapon = "Error";
                    }
                }
            }
            g_current_agent = GetCharacterName(unique_id);


            Sleep(250);
        }
    }

    void stop()
    {
        if (handleOffset) {
            CloseHandle(handleOffset);
        }
        cleanupWindow();
    }

    void run()
    {
        if (initialize()) {

            handleOffset = CreateThread(nullptr, NULL, (LPTHREAD_START_ROUTINE)getOffset, nullptr, NULL, nullptr);

            while (!glfwWindowShouldClose(g_window))
            {
                runRenderTick();
                handleOtherKeyPresses();

                if (GetAsyncKeyState(VK_F11) & 1) {
                    toggleDebugLog();
                }

                if (GetAsyncKeyState(VK_F12) & 1) {
                    break;
                }
            }
            stop();
        }
    }
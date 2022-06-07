#ifndef VECTOR_3_H
#define VECTOR_3_H
#include <d3d9.h>
#include <math.h>
#include <cassert>
#include <limits>
#define M_PI                       3.14159265358979323846f

#define UCONST_Pi 3.1415926535
#define RadianToURotation 180.0f / UCONST_Pi


class Vector3 {
public:
    double deg2rad(double deg) {
        return deg * M_PI / 180.0;
    }
    // -------------------- Attributes -------------------- //

    // Components of the vector
    float x, y, z;

    // -------------------- Methods -------------------- //

    // Constructor
    Vector3(float x = 0, float y = 0, float z = 0) : x(x), y(y), z(z) {}

    // Constructor
    Vector3(const Vector3& vector) : x(vector.x), y(vector.y), z(vector.z) {}

    // Constructor
    ~Vector3() {}

    Vector3& operator=(const Vector3& vector) {
        if (&vector != this) {
            x = vector.x;
            y = vector.y;
            z = vector.z;
        }
        return *this;
    }

    // + operator
    Vector3 operator+(const Vector3& v) const {
        return Vector3(x + v.x, y + v.y, z + v.z);
    }

    // += operator
    Vector3& operator+=(const Vector3& v) {
        x += v.x; y += v.y; z += v.z;
        return *this;
    }

    // - operator
    Vector3 operator-(const Vector3& v) const {
        return Vector3(x - v.x, y - v.y, z - v.z);
    }

    // -= operator
    Vector3& operator-=(const Vector3& v) {
        x -= v.x; y -= v.y; z -= v.z;
        return *this;
    }

    // == operator
    bool operator==(const Vector3& v) const {
        return x == v.x && y == v.y && z == v.z;
    }

    // != operator
    bool operator!=(const Vector3& v) const {
        return !(*this == v);
    }

    // * operator
    Vector3 operator*(float f) const {
        return Vector3(f * x, f * y, f * z);
    }

    // *= operator
    Vector3& operator*=(float f) {
        x *= f; y *= f; z *= f;
        return *this;
    }

    // / operator
    Vector3 operator/(float f) const {
        assert(f > std::numeric_limits<float>::epsilon());
        float inv = 1.f / f;
        return Vector3(x * inv, y * inv, z * inv);
    }

    // /= operator
    Vector3& operator/=(float f) {
        assert(f > std::numeric_limits<float>::epsilon());
        float inv = 1.f / f;
        x *= inv; y *= inv; z *= inv;
        return *this;
    }

    // - operator
    Vector3 operator-() const {
        return Vector3(-x, -y, -z);
    }

    // [] operator
    float& operator[](int i) {
        assert(i >= 0 && i <= 2);
        switch (i) {
        case 0: return x;
        case 1: return y;
        case 2: return z;
        }
        return z;
    }

    // [] operator
    const float& operator[](int i) const {
        assert(i >= 0 && i <= 2);
        switch (i) {
        case 0: return x;
        case 1: return y;
        case 2: return z;
        }
        return z;
    }

    // Cross product operator
    Vector3 cross(const Vector3& v) const {
        return Vector3(y * v.z - z * v.y, z * v.x - x * v.z, x * v.y - y * v.x);
    }

        float D(const Vector3& vOther) const {
        const Vector3& a = *this;
        return (a.x * vOther.x + a.y * vOther.y + a.z * vOther.z);
    }


    // Normalize the vector and return it
    /*Vector3 normalize() {
        float l = length();
        if (l < std::numeric_limits<float>::epsilon()) {
            assert(false);
        }
        x /= l;
        y /= l;
        z /= l;
        return *this;
    }*/

    bool isNull() const {
        return(x == 0. && y == 0. && z == 0.);
    }

    // Clamp the values between 0 and 1
    Vector3 clamp01() {
        if (x > 1.f) x = 1.f;
        else if (x < 0.f) x = 0.f;
        if (y > 1.f) y = 1.f;
        else if (y < 0.f) y = 0.f;
        if (z > 1.f) z = 1.f;
        else if (z < 0.f) z = 0.f;
        return *this;
    }

    inline float Distance(Vector3 v) {
        return float(sqrtf(powf(v.x - x, 2.0) + powf(v.y - y, 2.0) + powf(v.z - z, 2.0)));
    }

    inline float Dot(Vector3 v) {
        return x * v.x + y * v.y + z * v.z;
    }


    // Return the squared length of the vector
    float lengthSquared() const { return x * x + y * y + z * z; }

    // Return the length of the vector
    float length() const { return sqrt(lengthSquared()); }

};

struct Vector2 {
public:
    float x;
    float y;

    inline Vector2() : x(0), y(0) {}
    inline Vector2(float x, float y) : x(x), y(y) {}

    inline float Distance(Vector2 v) {
        return sqrtf(((v.x - x) * (v.x - x) + (v.y - y) * (v.y - y)));
    }

    inline Vector2 operator+(const Vector2& v) const {
        return Vector2(x + v.x, y + v.y);
    }

    inline Vector2 operator-(const Vector2& v) const {
        return Vector2(x - v.x, y - v.y);
    }
};

struct FQuat {
    float x;
    float y;
    float z;
    float w;
};

struct alignas(16) fQuat
{
    float                                              X;                                                        // 0x0000(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
    float                                              Y;                                                        // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
    float                                              Z;                                                        // 0x0008(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
    float                                              W;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};

struct alignas(16) FPlane : public Vector3
{
    float                                              W;                                                        // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData)
};
struct FM
{
    struct FPlane                                      XPlane;                                                   // 0x0000(0x0010) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
    struct FPlane                                      YPlane;                                                   // 0x0010(0x0010) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
    struct FPlane                                      ZPlane;                                                   // 0x0020(0x0010) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
    struct FPlane                                      WPlane;                                                   // 0x0030(0x0010) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)

    FM operator*(const FM& pM2)
    {
        FM pOut;
        pOut.XPlane.x = XPlane.x * pM2.XPlane.x + XPlane.y * pM2.YPlane.x + XPlane.z * pM2.ZPlane.x + XPlane.W * pM2.WPlane.x;
        pOut.XPlane.y = XPlane.x * pM2.XPlane.y + XPlane.y * pM2.YPlane.y + XPlane.z * pM2.ZPlane.y + XPlane.W * pM2.WPlane.y;
        pOut.XPlane.z = XPlane.x * pM2.XPlane.z + XPlane.y * pM2.YPlane.z + XPlane.z * pM2.ZPlane.z + XPlane.W * pM2.WPlane.z;
        pOut.XPlane.W = XPlane.x * pM2.XPlane.W + XPlane.y * pM2.YPlane.W + XPlane.z * pM2.ZPlane.W + XPlane.W * pM2.WPlane.W;
        pOut.YPlane.x = YPlane.x * pM2.XPlane.x + YPlane.y * pM2.YPlane.x + YPlane.z * pM2.ZPlane.x + YPlane.W * pM2.WPlane.x;
        pOut.YPlane.y = YPlane.x * pM2.XPlane.y + YPlane.y * pM2.YPlane.y + YPlane.z * pM2.ZPlane.y + YPlane.W * pM2.WPlane.y;
        pOut.YPlane.z = YPlane.x * pM2.XPlane.z + YPlane.y * pM2.YPlane.z + YPlane.z * pM2.ZPlane.z + YPlane.W * pM2.WPlane.z;
        pOut.YPlane.W = YPlane.x * pM2.XPlane.W + YPlane.y * pM2.YPlane.W + YPlane.z * pM2.ZPlane.W + YPlane.W * pM2.WPlane.W;
        pOut.ZPlane.x = ZPlane.x * pM2.XPlane.x + ZPlane.y * pM2.YPlane.x + ZPlane.z * pM2.ZPlane.x + ZPlane.W * pM2.WPlane.x;
        pOut.ZPlane.y = ZPlane.x * pM2.XPlane.y + ZPlane.y * pM2.YPlane.y + ZPlane.z * pM2.ZPlane.y + ZPlane.W * pM2.WPlane.y;
        pOut.ZPlane.z = ZPlane.x * pM2.XPlane.z + ZPlane.y * pM2.YPlane.z + ZPlane.z * pM2.ZPlane.z + ZPlane.W * pM2.WPlane.z;
        pOut.ZPlane.W = ZPlane.x * pM2.XPlane.W + ZPlane.y * pM2.YPlane.W + ZPlane.z * pM2.ZPlane.W + ZPlane.W * pM2.WPlane.W;
        pOut.WPlane.x = WPlane.x * pM2.XPlane.x + WPlane.y * pM2.YPlane.x + WPlane.z * pM2.ZPlane.x + WPlane.W * pM2.WPlane.x;
        pOut.WPlane.y = WPlane.x * pM2.XPlane.y + WPlane.y * pM2.YPlane.y + WPlane.z * pM2.ZPlane.y + WPlane.W * pM2.WPlane.y;
        pOut.WPlane.z = WPlane.x * pM2.XPlane.z + WPlane.y * pM2.YPlane.z + WPlane.z * pM2.ZPlane.z + WPlane.W * pM2.WPlane.z;
        pOut.WPlane.W = WPlane.x * pM2.XPlane.W + WPlane.y * pM2.YPlane.W + WPlane.z * pM2.ZPlane.W + WPlane.W * pM2.WPlane.W;
        return pOut;
    }



};
struct alignas(16) fTransform
{
    struct fQuat                                       Rotation;                                                 // 0x0000(0x0010) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
    struct Vector3                                     Translation;                                              // 0x0010(0x000C) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
    unsigned char                                      UnknownData00[0x4];                                       // 0x001C(0x0004) MISSED OFFSET
    struct Vector3                                     Scale3D;                                                  // 0x0020(0x000C) (Edit, BlueprintVisible, SaveGame, IsPlainOldData)
    unsigned char                                      UnknownData01[0x4];                                       // 0x002C(0x0004) MISSED OFFSET

    FM tomat()
    {
        FM m;
        m.WPlane.x = Translation.x;
        m.WPlane.y = Translation.y;
        m.WPlane.z = Translation.z;

        float x2 = Rotation.X + Rotation.X;
        float y2 = Rotation.Y + Rotation.Y;
        float z2 = Rotation.Z + Rotation.Z;

        float xx2 = Rotation.X * x2;
        float yy2 = Rotation.Y * y2;
        float zz2 = Rotation.Z * z2;
        m.XPlane.x = (1.0f - (yy2 + zz2)) * Scale3D.x;
        m.YPlane.y = (1.0f - (xx2 + zz2)) * Scale3D.x;
        m.ZPlane.z = (1.0f - (xx2 + yy2)) * Scale3D.z;

        float yz2 = Rotation.Y * z2;
        float wx2 = Rotation.W * x2;
        m.ZPlane.y = (yz2 - wx2) * Scale3D.z;
        m.YPlane.z = (yz2 + wx2) * Scale3D.y;

        float xy2 = Rotation.X * y2;
        float wz2 = Rotation.W * z2;
        m.YPlane.x = (xy2 - wz2) * Scale3D.y;
        m.XPlane.y = (xy2 + wz2) * Scale3D.x;

        float xz2 = Rotation.X * z2;
        float wy2 = Rotation.W * y2;
        m.ZPlane.x = (xz2 + wy2) * Scale3D.z;
        m.XPlane.z = (xz2 - wy2) * Scale3D.x;

        m.XPlane.W = 0.0f;
        m.YPlane.W = 0.0f;
        m.ZPlane.W = 0.0f;
        m.WPlane.W = 1.0f;

        return m;
    }
};
FM ToMatrix(Vector3 rot)
{
    Vector3 origin = Vector3{};
    float radPitch = (rot.x * float(M_PI) / 180.f);
    float radYaw = (rot.y * float(M_PI) / 180.f);
    float radRoll = (rot.z * float(M_PI) / 180.f);

    float SP = sinf(radPitch);
    float CP = cosf(radPitch);
    float SY = sinf(radYaw);
    float CY = cosf(radYaw);
    float SR = sinf(radRoll);
    float CR = cosf(radRoll);

    FM matrix;
    matrix.XPlane.x = CP * CY;
    matrix.XPlane.y = CP * SY;
    matrix.XPlane.z = SP;
    matrix.XPlane.W = 0.f;

    matrix.YPlane.x = SR * SP * CY - CR * SY;
    matrix.YPlane.y = SR * SP * SY + CR * CY;
    matrix.YPlane.z = -SR * CP;
    matrix.YPlane.W = 0.f;

    matrix.ZPlane.x = -(CR * SP * CY + SR * SY);
    matrix.ZPlane.y = CY * SR - CR * SP * SY;
    matrix.ZPlane.z = CR * CP;
    matrix.ZPlane.W = 0.f;

    matrix.WPlane.x = origin.x;
    matrix.WPlane.y = origin.y;
    matrix.WPlane.z = origin.z;
    matrix.WPlane.W = 1.f;

    return matrix;
}


struct FTransform {
    FQuat rot;
    Vector3 translation;
    char pad[4];
    Vector3 scale;
    char pad1[4];
    D3DMATRIX ToMatrixWithScale() {
        D3DMATRIX m;
        m._41 = translation.x;
        m._42 = translation.y;
        m._43 = translation.z;

        float x2 = rot.x + rot.x;
        float y2 = rot.y + rot.y;
        float z2 = rot.z + rot.z;

        float xx2 = rot.x * x2;
        float yy2 = rot.y * y2;
        float zz2 = rot.z * z2;
        m._11 = (1.0f - (yy2 + zz2)) * scale.x;
        m._22 = (1.0f - (xx2 + zz2)) * scale.y;
        m._33 = (1.0f - (xx2 + yy2)) * scale.z;

        float yz2 = rot.y * z2;
        float wx2 = rot.w * x2;
        m._32 = (yz2 - wx2) * scale.z;
        m._23 = (yz2 + wx2) * scale.y;

        float xy2 = rot.x * y2;
        float wz2 = rot.w * z2;
        m._21 = (xy2 - wz2) * scale.y;
        m._12 = (xy2 + wz2) * scale.x;

        float xz2 = rot.x * z2;
        float wy2 = rot.w * y2;
        m._31 = (xz2 + wy2) * scale.z;
        m._13 = (xz2 - wy2) * scale.x;

        m._14 = 0.0f;
        m._24 = 0.0f;
        m._34 = 0.0f;
        m._44 = 1.0f;

        return m;
    }
};

//struct FMinimalViewInfo
//{
//    Vector3 Location; //+ 0x1260
//    Vector3 Rotation; //+ 0x126C
//    float FOV;     //+ 0x1278
//};

class FRotator
{
public:
    float Pitch = 0.f;
    float Yaw = 0.f;
    float Roll = 0.f;

    D3DMATRIX GetAxes() {
        auto tempMatrix = Matrix();
        return tempMatrix;
    }

    D3DMATRIX Matrix(Vector3 origin = Vector3(0, 0, 0)) {
        float radPitch = (Pitch * float(UCONST_Pi) / 180.f);
        float radYaw = (Yaw * float(UCONST_Pi) / 180.f);
        float radRoll = (Roll * float(UCONST_Pi) / 180.f);
        float SP = sinf(radPitch);
        float CP = cosf(radPitch);
        float SY = sinf(radYaw);
        float CY = cosf(radYaw);
        float SR = sinf(radRoll);
        float CR = cosf(radRoll);

        D3DMATRIX matrix;
        matrix.m[0][0] = CP * CY;
        matrix.m[0][1] = CP * SY;
        matrix.m[0][2] = SP;
        matrix.m[0][3] = 0.f;

        matrix.m[1][0] = SR * SP * CY - CR * SY;
        matrix.m[1][1] = SR * SP * SY + CR * CY;
        matrix.m[1][2] = -SR * CP;
        matrix.m[1][3] = 0.f;

        matrix.m[2][0] = -(CR * SP * CY + SR * SY);
        matrix.m[2][1] = CY * SR - CR * SP * SY;
        matrix.m[2][2] = CR * CP;
        matrix.m[2][3] = 0.f;

        matrix.m[3][0] = origin.x;
        matrix.m[3][1] = origin.y;
        matrix.m[3][2] = origin.z;
        matrix.m[3][3] = 1.f;

        return matrix;
    }
};

D3DMATRIX MatrixMultiplication(D3DMATRIX pM1, D3DMATRIX pM2)
{
    D3DMATRIX pOut;
    pOut._11 = pM1._11 * pM2._11 + pM1._12 * pM2._21 + pM1._13 * pM2._31 + pM1._14 * pM2._41;
    pOut._12 = pM1._11 * pM2._12 + pM1._12 * pM2._22 + pM1._13 * pM2._32 + pM1._14 * pM2._42;
    pOut._13 = pM1._11 * pM2._13 + pM1._12 * pM2._23 + pM1._13 * pM2._33 + pM1._14 * pM2._43;
    pOut._14 = pM1._11 * pM2._14 + pM1._12 * pM2._24 + pM1._13 * pM2._34 + pM1._14 * pM2._44;
    pOut._21 = pM1._21 * pM2._11 + pM1._22 * pM2._21 + pM1._23 * pM2._31 + pM1._24 * pM2._41;
    pOut._22 = pM1._21 * pM2._12 + pM1._22 * pM2._22 + pM1._23 * pM2._32 + pM1._24 * pM2._42;
    pOut._23 = pM1._21 * pM2._13 + pM1._22 * pM2._23 + pM1._23 * pM2._33 + pM1._24 * pM2._43;
    pOut._24 = pM1._21 * pM2._14 + pM1._22 * pM2._24 + pM1._23 * pM2._34 + pM1._24 * pM2._44;
    pOut._31 = pM1._31 * pM2._11 + pM1._32 * pM2._21 + pM1._33 * pM2._31 + pM1._34 * pM2._41;
    pOut._32 = pM1._31 * pM2._12 + pM1._32 * pM2._22 + pM1._33 * pM2._32 + pM1._34 * pM2._42;
    pOut._33 = pM1._31 * pM2._13 + pM1._32 * pM2._23 + pM1._33 * pM2._33 + pM1._34 * pM2._43;
    pOut._34 = pM1._31 * pM2._14 + pM1._32 * pM2._24 + pM1._33 * pM2._34 + pM1._34 * pM2._44;
    pOut._41 = pM1._41 * pM2._11 + pM1._42 * pM2._21 + pM1._43 * pM2._31 + pM1._44 * pM2._41;
    pOut._42 = pM1._41 * pM2._12 + pM1._42 * pM2._22 + pM1._43 * pM2._32 + pM1._44 * pM2._42;
    pOut._43 = pM1._41 * pM2._13 + pM1._42 * pM2._23 + pM1._43 * pM2._33 + pM1._44 * pM2._43;
    pOut._44 = pM1._41 * pM2._14 + pM1._42 * pM2._24 + pM1._43 * pM2._34 + pM1._44 * pM2._44;

    return pOut;
}

D3DMATRIX toMatrix(Vector3 Rotation, Vector3 origin = Vector3(0, 0, 0))
{
    float Pitch = (Rotation.x * float(M_PI) / 180.f);
    float Yaw = (Rotation.y * float(M_PI) / 180.f);
    float Roll = (Rotation.z * float(M_PI) / 180.f);

    float SP = sinf(Pitch);
    float CP = cosf(Pitch);
    float SY = sinf(Yaw);
    float CY = cosf(Yaw);
    float SR = sinf(Roll);
    float CR = cosf(Roll);

    D3DMATRIX Matrix;
    Matrix._11 = CP * CY;
    Matrix._12 = CP * SY;
    Matrix._13 = SP;
    Matrix._14 = 0.f;

    Matrix._21 = SR * SP * CY - CR * SY;
    Matrix._22 = SR * SP * SY + CR * CY;
    Matrix._23 = -SR * CP;
    Matrix._24 = 0.f;

    Matrix._31 = -(CR * SP * CY + SR * SY);
    Matrix._32 = CY * SR - CR * SP * SY;
    Matrix._33 = CR * CP;
    Matrix._34 = 0.f;

    Matrix._41 = origin.x;
    Matrix._42 = origin.y;
    Matrix._43 = origin.z;
    Matrix._44 = 1.f;

    return Matrix;
}


Vector3 worldToScreen(Vector3 world_location, Vector3 position, Vector3 rotation, float fov)
{
    Vector3 screen_location = Vector3(0, 0, 0);

    D3DMATRIX tempMatrix = toMatrix(rotation);

    Vector3 vAxisX, vAxisY, vAxisZ;

    vAxisX = Vector3(tempMatrix.m[0][0], tempMatrix.m[0][1], tempMatrix.m[0][2]);
    vAxisY = Vector3(tempMatrix.m[1][0], tempMatrix.m[1][1], tempMatrix.m[1][2]);
    vAxisZ = Vector3(tempMatrix.m[2][0], tempMatrix.m[2][1], tempMatrix.m[2][2]);

    Vector3 vDelta = world_location - position;
    Vector3 vTransformed = Vector3(vDelta.Dot(vAxisY), vDelta.Dot(vAxisZ), vDelta.Dot(vAxisX));

    if (vTransformed.z < .1f)
        vTransformed.z = .1f;

    float FovAngle = fov;
    float ScreenCenterX = 1920 / 2.0f;
    float ScreenCenterY = 1080 / 2.0f;

    //screen_location.x = ScreenCenterX + vTransformed.x * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;
    //screen_location.y = ScreenCenterY - vTransformed.y * (ScreenCenterX / tanf(FovAngle * (float)M_PI / 360.f)) / vTransformed.z;

    //return screen_location;

    return Vector3(ScreenCenterX + vTransformed.x * (ScreenCenterX / static_cast<float>(tan(FovAngle * M_PI / 360))) / vTransformed.z, ScreenCenterY - vTransformed.y * (ScreenCenterX / static_cast<float>(tan(FovAngle * M_PI / 360))) / vTransformed.z, 0.f);

}

float RadianToDegree(float radian)
{
    return radian * (180 / M_PI);
}

float DegreeToRadian(float degree)
{
    return degree * (M_PI / 180);

}

Vector3 RadianToDegree(Vector3 radians)
{
    Vector3 degrees;
    degrees.x = radians.x * (180 / M_PI);
    degrees.y = radians.y * (180 / M_PI);
    degrees.z = radians.z * (180 / M_PI);
    return degrees;
}

Vector3 DegreeToRadian(Vector3 degrees)
{
    Vector3 radians;
    radians.x = degrees.x * (M_PI / 180);
    radians.y = degrees.y * (M_PI / 180);
    radians.z = degrees.z * (M_PI / 180);
    return radians;
}

void ClampAngle(Vector3& angle) {
    if (angle.y > 180.0f)
        angle.y = 180.0f;
    else if (angle.y < -180.0f)
        angle.y = -180.0f;

    if (angle.x > 89.0f)
        angle.x = 89.0f;
    else if (angle.x < -89.0f)
        angle.x = -89.0f;

    angle.z = 0;
}


void Normalise(Vector3& angle) {
    if (angle.x > 89.0f) angle.x = 89.0f;
    if (angle.x < -89.0f) angle.x = -89.0f;

    while (angle.y > 180) angle.y -= 360.f;
    while (angle.y < -180) angle.y += 360.f;
}

__forceinline void Clamp(Vector3& Ang) {
    if (Ang.x < 0.f)
        Ang.x += 360.f;
    if (Ang.x > 360.f)
        Ang.x -= 360.f;
    if (Ang.y < 0.f) Ang.y += 360.f;
    if (Ang.y > 360.f) Ang.y -= 360.f;
    Ang.z = 0.f;
}

static bool InsideCircle(float xc, float yc, float r, float x, float y)
{

    float dx = xc - x;
    float dy = yc - y;
    return dx * dx + dy * dy <= r * r;
}


#include <intrin.h>
__forceinline Vector3 CalcAngle(Vector3 Src, Vector3& Dst) {
    Vector3 Delta = Src - Dst;
    const auto sqrtss = [](float in) {
        __m128 reg = _mm_load_ss(&in);
        return _mm_mul_ss(reg, _mm_rsqrt_ss(reg)).m128_f32[0];
    };

    float hyp = sqrtss(Delta.x * Delta.x + Delta.y * Delta.y + Delta.z * Delta.z);

    Vector3 Rotation{};
    Rotation.x = RadianToDegree(acosf(Delta.z / hyp));
    Rotation.y = RadianToDegree(atanf(Delta.y / Delta.x));
    Rotation.z = 0;
    if (Delta.x >= 0.0f) Rotation.y += 180.0f;
    Rotation.x += 270.f;
    return Rotation;
}

double GetCrossDistance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
}

void normalize(Vector3& in)
{
    if (in.x > 89.f) in.x -= 360.f;
    else if (in.x < -89.f) in.x += 360.f;

    in.y = fmodf(in.y, 360.0f);///////////
    while (in.y > 180)in.y -= 360;
    while (in.y < -180)in.y += 360;
    in.z = 0;
}
 float NormalizeAngle(float flAng)
{
    if (flAng != flAng)
        flAng = 0.f;
    return fmod(flAng + 180.f, 360.f) - 180.f;
}
 void ClampViewAngles(Vector3& vecAng)
{
    vecAng.x = NormalizeAngle(vecAng.x);
    vecAng.y = NormalizeAngle(vecAng.y);
    vecAng.z = 0.0f;

    if (vecAng.x < -89.0)
    {
        vecAng.x = -89.0;
    }
    else if (vecAng.x > 89.0)
    {
        vecAng.x = 89.0;
    }
}

#endif

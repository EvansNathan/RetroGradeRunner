#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000007 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000011 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000013 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000014 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000015 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000016 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000017 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000018 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000019 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001A System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001B System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001C System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000001F System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000020 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000023 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000024 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000027 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000002A System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000002B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000002C System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000002D System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000002E System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000002F System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000030 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000031 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000032 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000033 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000034 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000035 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000036 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000037 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000038 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000039 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000003A System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000003B System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000003C System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000003D System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000003E System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000003F System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000040 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000041 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000042 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000043 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000044 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000045 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x00000047 System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x00000048 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x00000049 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000004A System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004B System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004C System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x0000004D System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x0000004E System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x0000004F System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000050 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000051 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000052 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000054 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000055 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x00000058 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x00000059 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000005A System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000005B System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x0000005C System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x0000005D T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x0000005E System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x0000005F System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[95] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[95] = 
{
	2418,
	2542,
	2542,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[28] = 
{
	{ 0x02000004, { 47, 4 } },
	{ 0x02000005, { 51, 9 } },
	{ 0x02000006, { 60, 7 } },
	{ 0x02000007, { 67, 10 } },
	{ 0x02000008, { 77, 1 } },
	{ 0x0200000A, { 78, 3 } },
	{ 0x0200000B, { 83, 5 } },
	{ 0x0200000C, { 88, 7 } },
	{ 0x0200000D, { 95, 3 } },
	{ 0x0200000E, { 98, 7 } },
	{ 0x0200000F, { 105, 4 } },
	{ 0x02000010, { 109, 21 } },
	{ 0x02000012, { 130, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 5 } },
	{ 0x06000006, { 15, 2 } },
	{ 0x06000007, { 17, 1 } },
	{ 0x06000008, { 18, 3 } },
	{ 0x06000009, { 21, 2 } },
	{ 0x0600000A, { 23, 4 } },
	{ 0x0600000B, { 27, 4 } },
	{ 0x0600000C, { 31, 3 } },
	{ 0x0600000D, { 34, 1 } },
	{ 0x0600000E, { 35, 3 } },
	{ 0x0600000F, { 38, 2 } },
	{ 0x06000010, { 40, 2 } },
	{ 0x06000011, { 42, 5 } },
	{ 0x0600002F, { 81, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[132] = 
{
	{ (Il2CppRGCTXDataType)2, 1136 },
	{ (Il2CppRGCTXDataType)3, 4069 },
	{ (Il2CppRGCTXDataType)2, 1934 },
	{ (Il2CppRGCTXDataType)2, 1627 },
	{ (Il2CppRGCTXDataType)3, 6996 },
	{ (Il2CppRGCTXDataType)2, 1210 },
	{ (Il2CppRGCTXDataType)2, 1631 },
	{ (Il2CppRGCTXDataType)3, 7009 },
	{ (Il2CppRGCTXDataType)2, 1629 },
	{ (Il2CppRGCTXDataType)3, 7002 },
	{ (Il2CppRGCTXDataType)2, 409 },
	{ (Il2CppRGCTXDataType)3, 19 },
	{ (Il2CppRGCTXDataType)3, 20 },
	{ (Il2CppRGCTXDataType)2, 747 },
	{ (Il2CppRGCTXDataType)3, 2982 },
	{ (Il2CppRGCTXDataType)2, 1443 },
	{ (Il2CppRGCTXDataType)3, 6051 },
	{ (Il2CppRGCTXDataType)3, 3300 },
	{ (Il2CppRGCTXDataType)2, 459 },
	{ (Il2CppRGCTXDataType)3, 447 },
	{ (Il2CppRGCTXDataType)3, 448 },
	{ (Il2CppRGCTXDataType)2, 1211 },
	{ (Il2CppRGCTXDataType)3, 4348 },
	{ (Il2CppRGCTXDataType)2, 1079 },
	{ (Il2CppRGCTXDataType)2, 819 },
	{ (Il2CppRGCTXDataType)2, 900 },
	{ (Il2CppRGCTXDataType)2, 948 },
	{ (Il2CppRGCTXDataType)2, 1080 },
	{ (Il2CppRGCTXDataType)2, 820 },
	{ (Il2CppRGCTXDataType)2, 901 },
	{ (Il2CppRGCTXDataType)2, 949 },
	{ (Il2CppRGCTXDataType)2, 902 },
	{ (Il2CppRGCTXDataType)2, 950 },
	{ (Il2CppRGCTXDataType)3, 2983 },
	{ (Il2CppRGCTXDataType)2, 893 },
	{ (Il2CppRGCTXDataType)2, 894 },
	{ (Il2CppRGCTXDataType)2, 946 },
	{ (Il2CppRGCTXDataType)3, 2981 },
	{ (Il2CppRGCTXDataType)2, 818 },
	{ (Il2CppRGCTXDataType)2, 899 },
	{ (Il2CppRGCTXDataType)2, 817 },
	{ (Il2CppRGCTXDataType)3, 8432 },
	{ (Il2CppRGCTXDataType)3, 2636 },
	{ (Il2CppRGCTXDataType)2, 661 },
	{ (Il2CppRGCTXDataType)2, 896 },
	{ (Il2CppRGCTXDataType)2, 947 },
	{ (Il2CppRGCTXDataType)2, 993 },
	{ (Il2CppRGCTXDataType)3, 4070 },
	{ (Il2CppRGCTXDataType)3, 4072 },
	{ (Il2CppRGCTXDataType)2, 292 },
	{ (Il2CppRGCTXDataType)3, 4071 },
	{ (Il2CppRGCTXDataType)3, 4080 },
	{ (Il2CppRGCTXDataType)2, 1139 },
	{ (Il2CppRGCTXDataType)2, 1630 },
	{ (Il2CppRGCTXDataType)3, 7003 },
	{ (Il2CppRGCTXDataType)3, 4081 },
	{ (Il2CppRGCTXDataType)2, 927 },
	{ (Il2CppRGCTXDataType)2, 969 },
	{ (Il2CppRGCTXDataType)3, 2988 },
	{ (Il2CppRGCTXDataType)3, 8427 },
	{ (Il2CppRGCTXDataType)3, 4073 },
	{ (Il2CppRGCTXDataType)2, 1138 },
	{ (Il2CppRGCTXDataType)2, 1628 },
	{ (Il2CppRGCTXDataType)3, 6997 },
	{ (Il2CppRGCTXDataType)3, 2987 },
	{ (Il2CppRGCTXDataType)3, 4074 },
	{ (Il2CppRGCTXDataType)3, 8426 },
	{ (Il2CppRGCTXDataType)3, 4087 },
	{ (Il2CppRGCTXDataType)2, 1140 },
	{ (Il2CppRGCTXDataType)2, 1632 },
	{ (Il2CppRGCTXDataType)3, 7010 },
	{ (Il2CppRGCTXDataType)3, 4389 },
	{ (Il2CppRGCTXDataType)3, 2193 },
	{ (Il2CppRGCTXDataType)3, 2989 },
	{ (Il2CppRGCTXDataType)3, 2192 },
	{ (Il2CppRGCTXDataType)3, 4088 },
	{ (Il2CppRGCTXDataType)3, 8428 },
	{ (Il2CppRGCTXDataType)3, 2986 },
	{ (Il2CppRGCTXDataType)2, 410 },
	{ (Il2CppRGCTXDataType)3, 23 },
	{ (Il2CppRGCTXDataType)3, 6038 },
	{ (Il2CppRGCTXDataType)2, 1444 },
	{ (Il2CppRGCTXDataType)3, 6052 },
	{ (Il2CppRGCTXDataType)2, 460 },
	{ (Il2CppRGCTXDataType)3, 449 },
	{ (Il2CppRGCTXDataType)3, 6044 },
	{ (Il2CppRGCTXDataType)3, 2173 },
	{ (Il2CppRGCTXDataType)2, 308 },
	{ (Il2CppRGCTXDataType)3, 6039 },
	{ (Il2CppRGCTXDataType)2, 1440 },
	{ (Il2CppRGCTXDataType)3, 475 },
	{ (Il2CppRGCTXDataType)2, 472 },
	{ (Il2CppRGCTXDataType)2, 648 },
	{ (Il2CppRGCTXDataType)3, 2179 },
	{ (Il2CppRGCTXDataType)3, 6040 },
	{ (Il2CppRGCTXDataType)3, 2168 },
	{ (Il2CppRGCTXDataType)3, 2169 },
	{ (Il2CppRGCTXDataType)3, 2167 },
	{ (Il2CppRGCTXDataType)3, 2170 },
	{ (Il2CppRGCTXDataType)2, 644 },
	{ (Il2CppRGCTXDataType)2, 1994 },
	{ (Il2CppRGCTXDataType)3, 2985 },
	{ (Il2CppRGCTXDataType)3, 2172 },
	{ (Il2CppRGCTXDataType)2, 881 },
	{ (Il2CppRGCTXDataType)3, 2171 },
	{ (Il2CppRGCTXDataType)2, 822 },
	{ (Il2CppRGCTXDataType)2, 1958 },
	{ (Il2CppRGCTXDataType)2, 906 },
	{ (Il2CppRGCTXDataType)2, 952 },
	{ (Il2CppRGCTXDataType)3, 2652 },
	{ (Il2CppRGCTXDataType)2, 669 },
	{ (Il2CppRGCTXDataType)3, 3182 },
	{ (Il2CppRGCTXDataType)3, 3183 },
	{ (Il2CppRGCTXDataType)3, 3188 },
	{ (Il2CppRGCTXDataType)2, 1001 },
	{ (Il2CppRGCTXDataType)3, 3185 },
	{ (Il2CppRGCTXDataType)3, 8694 },
	{ (Il2CppRGCTXDataType)2, 649 },
	{ (Il2CppRGCTXDataType)3, 2186 },
	{ (Il2CppRGCTXDataType)1, 878 },
	{ (Il2CppRGCTXDataType)2, 1966 },
	{ (Il2CppRGCTXDataType)3, 3184 },
	{ (Il2CppRGCTXDataType)1, 1966 },
	{ (Il2CppRGCTXDataType)1, 1001 },
	{ (Il2CppRGCTXDataType)2, 2008 },
	{ (Il2CppRGCTXDataType)2, 1966 },
	{ (Il2CppRGCTXDataType)3, 3189 },
	{ (Il2CppRGCTXDataType)3, 3187 },
	{ (Il2CppRGCTXDataType)3, 3186 },
	{ (Il2CppRGCTXDataType)2, 203 },
	{ (Il2CppRGCTXDataType)3, 2194 },
	{ (Il2CppRGCTXDataType)2, 298 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	95,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	28,
	s_rgctxIndices,
	132,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};

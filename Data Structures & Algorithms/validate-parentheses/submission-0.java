
class Solution {
    public boolean isValid(String s) {
        Deque<Character> stack = new ArrayDeque<>();
        char[] arr = s.toCharArray();
        Map<Character, Character> map = Map.of(
            '(', ')',
            '[', ']',
            '{', '}'
        );
        if(s.length() % 2 != 0) return false;

        for(int i = 0; i < arr.length; i++) {
            if(map.containsValue(arr[i])) {
                if(stack.size() == 0 || map.get(stack.peek()) != arr[i]) return false;

                stack.pop();
            } else {
                stack.push(arr[i]);
            }
        }
        return stack.size() == 0;
    }
}
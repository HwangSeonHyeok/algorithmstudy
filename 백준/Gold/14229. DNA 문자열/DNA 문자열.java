import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.ArrayDeque;
import java.util.HashMap;
import java.util.Map;
import java.util.Queue;

public class Main {
	static char[] DNAArr = { 'A', 'C', 'G', 'T' };

	static class NodeInfo {
		TrieNode node;
		String word;

		public NodeInfo(TrieNode node, String word) {
			this.node = node;
			this.word = word;
		}
	}

	static class TrieNode {
		Map<Character, TrieNode> children;

		public TrieNode() {
			children = new HashMap<>();
		}
	}

	static class Trie {
		TrieNode root;

		public Trie() {
			root = new TrieNode();
		}

		void insert(String word) {
			char[] charArr = word.toCharArray();
			TrieNode currentNode = root;
			for (char c : charArr) {
				if (currentNode.children.containsKey(c)) {
					currentNode = currentNode.children.get(c);
				} else {
					currentNode.children.put(c, new TrieNode());
					currentNode = currentNode.children.get(c);
				}
			}
		}

		String findShortestNewDNA() {
			Queue<NodeInfo> queue = new ArrayDeque<NodeInfo>();
			queue.add(new NodeInfo(root, ""));
			while (!queue.isEmpty()) {
				NodeInfo currentInfo = queue.poll();
				TrieNode currentNode = currentInfo.node;
				if (currentNode.children.size() < DNAArr.length) {
					for (char DNA : DNAArr) {
						if (!currentNode.children.containsKey(DNA)) {
							return currentInfo.word + DNA;
						}
					}

				} else {
					for (char DNA : DNAArr) {
						TrieNode nextNode = currentNode.children.get(DNA);
						queue.add(new NodeInfo(nextNode, currentInfo.word + DNA));
					}
				}
			}

			return "";

		}
	}

	public static void main(String[] args) throws Exception {
		BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
		String str = in.readLine();
		Trie trie = new Trie();
		for (int i = 0; i < str.length(); i++) {
			trie.insert(str.substring(i));
		}
		String ans = trie.findShortestNewDNA();
		System.out.println(ans);

	}

}
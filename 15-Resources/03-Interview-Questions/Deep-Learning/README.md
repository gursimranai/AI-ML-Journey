# Deep Learning Interview Questions

This directory contains interview preparation questions covering the mathematical foundations, architectures, training techniques, and practical applications of Deep Learning.

The focus is on understanding **how neural networks learn, why specific techniques are used, and how to diagnose and improve model performance**.

## Topics Covered

### 1. Neural Network Fundamentals
- What is an artificial neural network?
- What are neurons, weights, biases, and activation functions?
- How does forward propagation work?
- What is the difference between a perceptron and a multilayer neural network?
- Why are nonlinear activation functions necessary?
- What are parameters and hyperparameters?

### 2. Mathematical Foundations
- What is a gradient?
- How does the chain rule apply to neural networks?
- What are partial derivatives and computational graphs?
- How are loss functions related to optimization?
- What is the role of linear algebra in neural networks?
- How do numerical stability and floating-point precision affect training?

### 3. Activation and Loss Functions
- Compare Sigmoid, Tanh, ReLU, and Leaky ReLU.
- What is the dying ReLU problem?
- When is Softmax used?
- Compare mean squared error and cross-entropy loss.
- Why should the output layer match the task?
- What are vanishing and exploding gradients?

### 4. Backpropagation and Optimization
- Explain backpropagation step by step.
- How does gradient descent update model parameters?
- Compare batch, stochastic, and mini-batch gradient descent.
- Compare SGD, Momentum, RMSprop, and Adam.
- What is the learning rate, and how does it affect convergence?
- What are learning-rate schedules?
- What is gradient clipping?

### 5. Model Training and Generalization
- What are epochs, batches, and iterations?
- What is the difference between training loss and validation loss?
- How do overfitting and underfitting occur?
- Explain dropout, weight decay, and early stopping.
- What is batch normalization?
- How can class imbalance affect training?
- How do you diagnose an unstable training process?

### 6. Deep Learning Architectures
- How do feedforward neural networks work?
- What makes CNNs effective for image data?
- How do RNNs process sequential data?
- Compare RNNs, LSTMs, and GRUs.
- What is attention?
- How does the Transformer architecture work?
- What are autoencoders and generative models?

### 7. Evaluation and Experimentation
- Which metrics are suitable for classification and regression?
- Why is a separate test set important?
- What is data leakage in a deep learning pipeline?
- How do you compare two model architectures fairly?
- What are ablation studies?
- How do random seeds and reproducibility affect experiments?
- How should model checkpoints be used?

### 8. Frameworks and Implementation
- What is automatic differentiation?
- How do tensors differ from NumPy arrays?
- What is a computational graph?
- How do you implement a training loop?
- How do you use GPU acceleration?
- What are model parameters and gradient buffers?
- How do you save and load model checkpoints?

### 9. Practical and Scenario-Based Questions
- Training loss decreases, but validation loss increases. What might be happening?
- A model produces NaN loss values. How would you investigate?
- Training is very slow. How would you profile the bottleneck?
- A deeper network performs worse than a smaller one. What could explain this?
- How would you select a batch size and learning rate?
- How would you handle a small labeled dataset?
- How would you reduce inference latency without severely harming accuracy?

## Recommended Question Format

For each question, document:

- **Question:** The interview question.
- **Difficulty:** Beginner, Intermediate, or Advanced.
- **Concepts tested:** The underlying mathematical or technical ideas.
- **Answer:** A clear explanation with reasoning.
- **Example:** A formula, diagram, numerical example, or code snippet where useful.
- **Follow-up questions:** Deeper questions about limitations and alternatives.

## Recommended File Organization

```text
Deep-Learning/
├── README.md
├── Neural-Network-Fundamentals.md
├── Backpropagation-And-Optimization.md
├── Activation-And-Loss-Functions.md
├── CNN-RNN-And-Transformers.md
├── Regularization-And-Generalization.md
└── Practical-Deep-Learning-Questions.md
```

*The filenames above are suggestions. Preserve your existing files and filenames.*

## Preparation Guidelines

- Derive important formulas instead of memorizing them alone.
- Trace small neural networks manually to understand forward and backward passes.
- Implement concepts using a deep learning framework.
- Explain trade-offs between alternative techniques.
- Practice diagnosing model failures using training curves and metrics.
- Review foundational calculus, linear algebra, and probability where needed.

This directory supports preparation for Deep Learning, Computer Vision, NLP, and AI engineering interviews within the broader `AI-ML-Journey` repository.
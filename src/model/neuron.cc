#include "neuron.h"

Neuron::Neuron() {}

void Neuron::GenerateWeight() {
  for (size_t i = 0; i < array_weight_.size(); i++) {
    array_weight_[i] = 0.001 * (std::rand() % 2001 - 1000);
  }
}

void Neuron::SetCountWeight(int count_weight) {
  count_weight_ = count_weight;
  array_weight_.resize(count_weight);
}

void Neuron::SetValue(double value) { value_ = value; }
void Neuron::SetError(double error) { error_ = error; }
void Neuron::SetDeltaWeight(double delta_weight) {
  delta_weight_ = delta_weight;
}
void Neuron::SetWeightNeuron(int weight_index, double weight) {
  array_weight_[weight_index] = weight;
}

double Neuron::GetValue() { return value_; }
double Neuron::GetError() { return error_; }
double Neuron::GetNeuronDelta() { return delta_weight_; }
double Neuron::GetWeightVector(int index_weight) {
  return array_weight_[index_weight];
}

void Neuron::ClearFunction() {
  value_ = 0;
  count_weight_ = 0;
  array_weight_.clear();
  delta_weight_ = 0;
  error_ = 0;
}